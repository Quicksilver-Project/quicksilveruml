/**~use case~
 * UseCase [Class]
 * 
 * Description
 * 
 * A UseCase specifies a set of actions
 * performed by its subjects,
 * which yields an observable
 * result that is of value for one
 * or more Actors or other
 * stakeholders of each subject.
 * 
 * Diagrams
 * 
 * Use Cases, Classifiers
 * 
 * Generalizations
 * 
 * BehavioredClassifier
 * 
 * Association Ends
 * 
 *  ♦ extend : Extend [0..*]
 * {subsets A_source_directedRelationship
 * ::directedRelationship, subsets
 * Namespace::ownedMember} 
 * (opposite Extend::extension)
 * 
 * The Extend relationships owned by this UseCase.
 * 
 *  ♦ extensionPoint : ExtensionPoint [0..*]
 * {subsets Namespace::ownedMember} (opposite
 * ExtensionPoint::useCase)
 * 
 * The ExtensionPoints owned by this UseCase.
 * 
 *  ♦ include : Include [0..*]
 * {subsets A_source_directedRelationship
 * ::directedRelationship, subsets
 * Namespace::ownedMember} 
 * (opposite Include::includingCase)
 * 
 * The Include relationships owned by this UseCase.
 * 
 *  subject : Classifier [0..*] 
 * (opposite Classifier::useCase)
 * 
 * The subjects to which this UseCase applies.
 * Each subject or its parts realize 
 * all the UseCases that apply to it.
 * 
 * Operations
 * 
 *  allIncludedUseCases() : UseCase [0..*]
 * 
 * The query allIncludedUseCases() returns the
 * transitive closure of all UseCases
 * (directly or indirectly) included
 * by this UseCase.
 * 
 * body: self.include.addition->union(self.include.addition->collect(uc |
 * uc.allIncludedUseCases()))->asSet()
 * 
 * Constraints
 * 
 *  binary_associations
 * 
 * UseCases can only be involved in binary Associations.
 * 
 * inv: Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies
 * a.memberEnd->size() = 2)
 * 
 *  no_association_to_use_case
 * 
 * UseCases cannot have Associations to
 * UseCases specifying the same subject.
 * 
 * inv: Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies
 * (
 * let usecases: Set(UseCase) = a.memberEnd.type->select(oclIsKindOf(UseCase))-
 * >collect(oclAsType(UseCase))->asSet() in
 * usecases->size() > 1 implies usecases->collect(subject)->size() > 1
 * )
 * )
 * 
 *  cannot_include_self
 * 
 * A UseCase cannot include UseCases
 * that directly or indirectly include it.
 * 
 * inv: not allIncludedUseCases()->includes(self)
 * 
 *  must_have_name
 * 
 * A UseCase must have a name.
 * 
 * inv: name -> notEmpty ()
**/
