/**~classification~
 * A_method_specification [Association]
 * 
 * Diagrams
 * 
 * Features, Behaviors
 * 
 * Member Ends
 * 
 *  BehavioralFeature::method
 * 
 *  Behavior::specification
**/
/**
 * A_ownedParameterSet_behavioralFeature [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  behavioralFeature : BehavioralFeature [0..1]{subsets NamedElement::namespace} (opposite
 * BehavioralFeature::ownedParameterSet)
**/
/**
 * A_ownedParameter_ownerFormalParam [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  ownerFormalParam : BehavioralFeature [0..1]{subsets NamedElement::namespace} (opposite
 * BehavioralFeature::ownedParameter)
**/
/**
 * A_raisedException_behavioralFeature [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  behavioralFeature : BehavioralFeature [0..*] (opposite BehavioralFeature::raisedException)
**/
/**
 * A_raisedException_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_raisedException_behavioralFeature::behavioralFeature} (opposite
 * Operation::raisedException)
**/
/**
 * A_raisedException_behavioralFeature [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  behavioralFeature : BehavioralFeature [0..*] (opposite BehavioralFeature::raisedException)
**/
/**
 * A_ownedParameter_ownerFormalParam [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  ownerFormalParam : BehavioralFeature [0..1]{subsets NamedElement::namespace} (opposite
 * BehavioralFeature::ownedParameter)
**/
/**
 * A_ownedParameterSet_behavioralFeature [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  behavioralFeature : BehavioralFeature [0..1]{subsets NamedElement::namespace} (opposite
 * BehavioralFeature::ownedParameterSet)
**/
/**
 * A_method_specification [Association]
 * 
 * Diagrams
 * 
 * Features, Behaviors
 * 
 * Member Ends
 * 
 *  BehavioralFeature::method
 * 
 *  Behavior::specification
**/