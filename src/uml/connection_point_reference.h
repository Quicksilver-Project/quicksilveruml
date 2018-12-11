/**~state machine~
 * A_connection_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  State::connection
 * 
 *  ConnectionPointReference::state
**/
/**
 * A_entry_connectionPointReference [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  connectionPointReference : ConnectionPointReference [0..1] (opposite ConnectionPointReference::entry)
**/
/**
 * A_exit_connectionPointReference [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  connectionPointReference : ConnectionPointReference [0..1] (opposite ConnectionPointReference::exit)
**/