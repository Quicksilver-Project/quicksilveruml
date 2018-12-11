/**~action~
 * A_argument_invocationAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Specializations
 * 
 * A_request_sendObjectAction
 * 
 * Owned Ends
 * 
 *  invocationAction : InvocationAction [0..1]{subsets A_input_action::action} (opposite
 * InvocationAction::argument)
**/
/**
 * A_onPort_invocationAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  invocationAction : InvocationAction [0..*] (opposite InvocationAction::onPort)
**/
/**
 * A_request_sendObjectAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * A_argument_invocationAction
 * 
 * Owned Ends
 * 
 *  sendObjectAction : SendObjectAction [0..1]{redefines A_argument_invocationAction::invocationAction}
 * (opposite SendObjectAction::request)
**/