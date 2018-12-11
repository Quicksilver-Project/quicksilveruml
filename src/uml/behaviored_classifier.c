/**~simple classifier~
 * BehavioredClassifier [Abstract Class]
 * 
 * Description
 * 
 * A BehavioredClassifier may have InterfaceRealizations, and owns a set of Behaviors one of which may specify the
 * behavior of the BehavioredClassifier itself.
 * 
 * Diagrams
 * 
 * Interfaces, Use Cases, Classes, Collaborations, Behaviors
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Specializations
 * 
 * Actor, UseCase, Class, Collaboration
 * 
 * Association Ends
 * 
 *  classifierBehavior : Behavior [0..1]{subsets BehavioredClassifier::ownedBehavior} (opposite
 * A_classifierBehavior_behavioredClassifier::behavioredClassifier)
 * 
 * A Behavior that specifies the behavior of the BehavioredClassifier itself.
 * 
 *  ♦ interfaceRealization : InterfaceRealization [0..*]{subsets Element::ownedElement, subsets
 * NamedElement::clientDependency} (opposite InterfaceRealization::implementingClassifier)
 * 
 * The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the
 * Interfaces of which the BehavioredClassifier is an implementation.
 * 
 *  ♦ ownedBehavior : Behavior [0..*]{subsets Namespace::ownedMember} (opposite
 * A_ownedBehavior_behavioredClassifier::behavioredClassifier)
 * 
 * Behaviors owned by a BehavioredClassifier.
 * 
 * Constraints
 * 
 *  class_behavior
 * 
 * If a behavior is classifier behavior, it does not have a specification.
 * inv: classifierBehavior->notEmpty() implies classifierBehavior.specification->isEmpty()
**/