/**~classification~
 * Classifier [Abstract Class]
 * 
 * Description
 * 
 * A Classifier represents a classification of instances according to their Features.
 * 
 * Diagrams
 * 
 * Classifiers, Classifier Templates, Features, Instances, Generalization Sets, Executable Nodes, Use Cases,
 * Structured Classifiers, Classes, Associations, Components, Collaborations, State Machine Redefinition,
 * DataTypes, Signals, Interfaces, Information Flows, Artifacts, Actions, Accept Event Actions, Object Actions
 * 
 * Generalizations
 * 
 * Namespace, Type, TemplateableElement, RedefinableElement
 * 
 * Specializations
 * 
 * Association, StructuredClassifier, BehavioredClassifier, DataType, Interface, Signal, InformationItem, Artifact
 * 
 * Attributes
 * 
 *  isAbstract : Boolean [1..1] = false
 * 
 * If true, the Classifier can only be instantiated by instantiating one of its specializations. An abstract Classifier is
 * intended to be used by other Classifiers e.g., as the target of Associations or Generalizations.
 * 
 *  isFinalSpecialization : Boolean [1..1] = false
 * 
 * If true, the Classifier cannot be specialized.
 * 
 * Association Ends
 * 
 *  /attribute : Property [0..*]{ordered, union, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement} (opposite A_attribute_classifier::classifier)
 * 
 *  ♦ collaborationUse : CollaborationUse [0..*]{subsets Element::ownedElement} (opposite
 * A_collaborationUse_classifier::classifier)
 * 
 * The CollaborationUses owned by the Classifier.
 * 
 *  /feature : Feature [0..*]{union, subsets Namespace::member} (opposite Feature::featuringClassifier)
 * 
 * Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that
 * are of the type Feature but are not included, e.g., inherited features.
 * 
 *  /general : Classifier [0..*] (opposite A_general_classifier::classifier)
 * 
 * The generalizing Classifiers for this Classifier.
 * 
 *  ♦ generalization : Generalization [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite Generalization::specific)
 * The Generalization relationships for this Classifier. These Generalizations navigate to more general Classifiers
 * in the generalization hierarchy.
 * 
 *  /inheritedMember : NamedElement [0..*]{subsets Namespace::member} (opposite
 * A_inheritedMember_inheritingClassifier::inheritingClassifier)
 * 
 * All elements inherited by this Classifier from its general Classifiers.
 * 
 *  ♦ ownedTemplateSignature : RedefinableTemplateSignature [0..1]{subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, redefines
 * TemplateableElement::ownedTemplateSignature} (opposite RedefinableTemplateSignature::classifier)
 * 
 * The optional RedefinableTemplateSignature specifying the formal template parameters.
 * 
 *  ♦ ownedUseCase : UseCase [0..*]{subsets Namespace::ownedMember} (opposite
 * A_ownedUseCase_classifier::classifier)
 * 
 * The UseCases owned by this classifier.
 * 
 *  powertypeExtent : GeneralizationSet [0..*] (opposite GeneralizationSet::powertype)
 * 
 * The GeneralizationSet of which this Classifier is a power type.
 * 
 *  redefinedClassifier : Classifier [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedClassifier_classifier::classifier)
 * 
 * The Classifiers redefined by this Classifier.
 * 
 *  representation : CollaborationUse [0..1]{subsets Classifier::collaborationUse} (opposite
 * A_representation_classifier::classifier)
 * 
 * A CollaborationUse which indicates the Collaboration that represents this Classifier.
 * 
 *  ♦ substitution : Substitution [0..*]{subsets Element::ownedElement, subsets NamedElement::clientDependency}
 * (opposite Substitution::substitutingClassifier)
 * 
 * The Substitutions owned by this Classifier.
 * 
 *  templateParameter : ClassifierTemplateParameter [0..1]{redefines ParameterableElement::templateParameter}
 * (opposite ClassifierTemplateParameter::parameteredElement)
 * 
 * TheClassifierTemplateParameter that exposes this element as a formal parameter.
 * 
 *  useCase : UseCase [0..*] (opposite UseCase::subject)
 * 
 * The set of UseCases for which this Classifier is the subject.
 * 
 * Operations
 * 
 *  allFeatures() : Feature [0..*]
 * 
 * The query allFeatures() gives all of the Features in the namespace of the Classifier. In general, through
 * mechanisms such as inheritance, this will be a larger set than feature.
 * 
 * body: member->select(oclIsKindOf(Feature))->collect(oclAsType(Feature))->asSet()
 * 
 *  allParents() : Classifier [0..*]
 * 
 * The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 * 
 * body: parents()->union(parents()->collect(allParents())->asSet())
 * 
 *  conformsTo(other : Type) : Boolean {redefines Type::conformsTo()}
 * 
 * The query conformsTo() gives true for a Classifier that defines a type that conforms to another. This is used,
 * for example, in the specification of signature conformance for operations.
 * 
 * body: if other.oclIsKindOf(Classifier) then
 * let otherClassifier : Classifier = other.oclAsType(Classifier) in
 * self = otherClassifier or allParents()->includes(otherClassifier)
 * else
 * false
 * endif
 * 
 *  general() : Classifier [0..*]
 * 
 * The general Classifiers are the ones referenced by the Generalization relationships.
 * 
 * body: parents()
 * 
 *  hasVisibilityOf(n : NamedElement) : Boolean
 * 
 * The query hasVisibilityOf() determines whether a NamedElement is visible in the classifier. Non-private
 * members are visible. It is only called when the argument is something owned by a parent.
 * 
 * pre: allParents()->including(self)->collect(member)->includes(n)
 * 
 * body: n.visibility <> VisibilityKind::private
 * 
 *  inherit(inhs : NamedElement [0..*]) : NamedElement [0..*]
 * 
 * The query inherit() defines how to inherit a set of elements passed as its argument. It excludes redefined
 * elements from the result.
 * 
 * body: inhs->reject(inh |
 * inh.oclIsKindOf(RedefinableElement) and
 * ownedMember->select(oclIsKindOf(RedefinableElement))->
 * select(redefinedElement->includes(inh.oclAsType(RedefinableElement)))
 * ->notEmpty())
 * 
 *  inheritableMembers(c : Classifier) : NamedElement [0..*]
 * 
 * The query inheritableMembers() gives all of the members of a Classifier that may be inherited in one of its
 * descendants, subject to whatever visibility restrictions apply.
 * 
 * pre: c.allParents()->includes(self)
 * 
 * body: member->select(m | c.hasVisibilityOf(m))
 * 
 *  inheritedMember() : NamedElement [0..*]
 * 
 * The inheritedMember association is derived by inheriting the inheritable members of the parents.
 * 
 * body: inherit(parents()->collect(inheritableMembers(self))->asSet())
 * 
 *  isTemplate() : Boolean {redefines TemplateableElement::isTemplate()}
 * 
 * The query isTemplate() returns whether this Classifier is actually a template.
 * 
 * body: ownedTemplateSignature <> null or general->exists(g | g.isTemplate())
 * 
 *  maySpecializeType(c : Classifier) : Boolean
 * 
 * The query maySpecializeType() determines whether this classifier may have a generalization relationship to
 * classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general
 * type. It is intended to be redefined by classifiers that have different specialization constraints.
 * body: self.oclIsKindOf(c.oclType())
 * 
 *  parents() : Classifier [0..*]
 * 
 * The query parents() gives all of the immediate ancestors of a generalized Classifier.
 * 
 * body: generalization.general->asSet()
 * 
 *  directlyRealizedInterfaces() : Interface [0..*]
 * 
 * The Interfaces directly realized by this Classifier
 * 
 * body: (clientDependency->
 * select(oclIsKindOf(Realization) and supplier->forAll(oclIsKindOf(Interface))))->
 * collect(supplier.oclAsType(Interface))->asSet()
 * 
 *  directlyUsedInterfaces() : Interface [0..*]
 * The Interfaces directly used by this Classifier
 * 
 * body: (supplierDependency->
 * select(oclIsKindOf(Usage) and client->forAll(oclIsKindOf(Interface))))->
 * collect(client.oclAsType(Interface))->asSet()
 * 
 *  allRealizedInterfaces() : Interface [0..*]
 * 
 * The Interfaces realized by this Classifier and all of its generalizations
 * body: directlyRealizedInterfaces()->union(self.allParents()-
 * >collect(directlyRealizedInterfaces()))->asSet()
 * 
 *  allUsedInterfaces() : Interface [0..*]
 * 
 * The Interfaces used by this Classifier and all of its generalizations
 * 
 * body: directlyUsedInterfaces()->union(self.allParents()->collect(directlyUsedInterfaces()))-
 * >asSet()
 * 
 *  isSubstitutableFor(contract : Classifier) : Boolean
 * 
 * body: substitution.contract->includes(contract)
 * 
 *  allAttributes() : Property [0..*]{ordered}
 * 
 * The query allAttributes gives an ordered set of all owned and inherited attributes of the Classifier. All owned
 * attributes appear before any inherited attributes, and the attributes inherited from any more specific parent
 * Classifier appear before those of any more general parent Classifier. However, if the Classifier has multiple
 * immediate parents, then the relative ordering of the sets of attributes from those parents is not defined.
 * 
 * body: attribute->asSequence()->union(parents()->asSequence().allAttributes())->select(p |
 * member->includes(p))->asOrderedSet()
 * 
 *  allSlottableFeatures() : StructuralFeature [0..*]
 * 
 * All StructuralFeatures related to the Classifier that may have Slots, including direct attributes, inherited
 * attributes, private attributes in generalizations, and memberEnds of Associations, but excluding redefined
 * StructuralFeatures.
 * 
 * body: member->select(oclIsKindOf(StructuralFeature))->
 * collect(oclAsType(StructuralFeature))->
 * union(self.inherit(self.allParents()->collect(p | p.attribute)->asSet())->
 * collect(oclAsType(StructuralFeature)))->asSet()
 * 
 * Constraints
 * 
 *  specialize_type
 * 
 * A Classifier may only specialize Classifiers of a valid type.
 * 
 * inv: parents()->forAll(c | self.maySpecializeType(c))
 * 
 *  maps_to_generalization_set
 * 
 * The Classifier that maps to a GeneralizationSet may neither be a specific nor a general Classifier in any of the
 * Generalization relationships defined for that GeneralizationSet. In other words, a power type may not be an
 * instance of itself nor may its instances also be its subclasses.
 * 
 * inv: powertypeExtent->forAll( gs |
 * gs.generalization->forAll( gen |
 * not (gen.general = self) and not gen.general.allParents()->includes(self) and not
 * (gen.specific = self) and not self.allParents()->includes(gen.specific)
 * ))
 * 
 *  non_final_parents
 * 
 * The parents of a Classifier must be non-final.
 * 
 * inv: parents()->forAll(not isFinalSpecialization)
 * 
 *  no_cycles_in_generalization
 * 
 * Generalization hierarchies must be directed and acyclical. A Classifier can not be both a transitively general
 * and transitively specific Classifier of the same Classifier.
 * 
 * inv: not allParents()->includes(self)
**/