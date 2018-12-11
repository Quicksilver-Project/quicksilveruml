/**~action~
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
/**
 * A_target_sendObjectAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  sendObjectAction : SendObjectAction [0..1]{subsets A_input_action::action} (opposite
 * SendObjectAction::target)
**/