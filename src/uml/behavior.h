/**~common behavior~
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
 * A_context_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..*]{subsets A_redefinitionContext_redefinableElement::redefinableElement} (opposite
 * Behavior::context)
**/
/**
 * A_ownedParameterSet_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..1]{subsets NamedElement::namespace} (opposite Behavior::ownedParameterSet)
**/
/**
 * A_ownedParameter_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..1]{subsets NamedElement::namespace} (opposite Behavior::ownedParameter)
**/
/**
 * A_postcondition_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..1]{subsets Constraint::context} (opposite Behavior::postcondition)
**/
/**
 * A_redefinedBehavior_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..*]{subsets A_redefinedClassifier_classifier::classifier} (opposite
 * Behavior::redefinedBehavior)
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
/**
 * A_precondition_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..1]{subsets Constraint::context} (opposite Behavior::precondition)
**/
/**
 * A_behavior_callBehaviorAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  callBehaviorAction : CallBehaviorAction [0..*] (opposite CallBehaviorAction::behavior)
**/