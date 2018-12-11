/**~use case~
 * Actor [Class]
 * 
 * Description
 * 
 * An Actor specifies a role played by a user or any other system that interacts with the subject.
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Generalizations
 * 
 * BehavioredClassifier
 * 
 * Constraints
 * 
 *  associations
 * 
 * An Actor can only have Associations to UseCases, Components, and Classes. Furthermore these Associations
 * must be binary.
 * inv: Association.allInstances()->forAll( a |
 * a.memberEnd->collect(type)->includes(self) implies
 * (
 * a.memberEnd->size() = 2 and
 * let actorEnd : Property = a.memberEnd->any(type = self) in
 * actorEnd.opposite.class.oclIsKindOf(UseCase) or
 * ( actorEnd.opposite.class.oclIsKindOf(Class) and not
 * actorEnd.opposite.class.oclIsKindOf(Behavior))
 * )
 * )
 * 
 *  must_have_name
 * 
 * An Actor must have a name.
 * inv: name->notEmpty()
**/