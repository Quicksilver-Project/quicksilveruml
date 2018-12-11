/**~state machine~
 * A_connectionPoint_stateMachine [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  StateMachine::connectionPoint
 * 
 *  Pseudostate::stateMachine
**/
/**
 * A_extendedStateMachine_stateMachine [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Owned Ends
 * 
 *  stateMachine : StateMachine [0..*]{subsets A_redefinedBehavior_behavior::behavior} (opposite
 * StateMachine::extendedStateMachine)
**/
/**
 * A_region_stateMachine [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  StateMachine::region
 * 
 *  Region::stateMachine
**/
/**
 * A_submachineState_submachine [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  StateMachine::submachineState
 * 
 *  State::submachine
**/
