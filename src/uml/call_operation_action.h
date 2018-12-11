/**~action~
 * A_operation_callOperationAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  callOperationAction : CallOperationAction [0..*] (opposite CallOperationAction::operation)
**/
/**
 * A_target_callOperationAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  callOperationAction : CallOperationAction [0..1]{subsets A_input_action::action} (opposite
 * CallOperationAction::target)
**/
