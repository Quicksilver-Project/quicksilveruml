/**~simple classifier~
 * A_ownedBehavior_behavioredClassifier [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Behaviors
 * 
 * Specializations
 * 
 * A_classifierBehavior_behavioredClassifier
 * 
 * Owned Ends
 * 
 *  behavioredClassifier : BehavioredClassifier [0..1]{subsets NamedElement::namespace} (opposite
 * BehavioredClassifier::ownedBehavior)
**/
/**
 * A_interfaceRealization_implementingClassifier [Association]
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Member Ends
 * 
 *  BehavioredClassifier::interfaceRealization
 * 
 *  InterfaceRealization::implementingClassifier
**/
/**
 * A_classifierBehavior_behavioredClassifier [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Behaviors
 * 
 * Generalizations
 * 
 * A_ownedBehavior_behavioredClassifier
 * 
 * Owned Ends
 *  behavioredClassifier : BehavioredClassifier [0..1]{redefines
 * A_ownedBehavior_behavioredClassifier::behavioredClassifier} (opposite
 * BehavioredClassifier::classifierBehavior)
**/