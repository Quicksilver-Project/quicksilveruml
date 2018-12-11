/**~action~
 * A_signal_sendSignalAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  sendSignalAction : SendSignalAction [0..*] (opposite SendSignalAction::signal)
**/
/**
 * A_target_sendSignalAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  sendSignalAction : SendSignalAction [0..1]{subsets A_input_action::action} (opposite
 * SendSignalAction::target)
**/
