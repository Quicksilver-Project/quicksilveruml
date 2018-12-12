#include "element.h"
#include "redefinable_element.h"
#include "vertex.h"
/**~state machine~
 * A_connectionPoint_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  State::connectionPoint
 *  Pseudostate::state
**/
/**
 * A_connection_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  State::connection
 *  ConnectionPointReference::state
**/
/**
 * A_deferrableTrigger_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  state : State [0..1]{subsets Element::owner} (opposite State::deferrableTrigger)
**/
/**
 * A_doActivity_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  state : State [0..1]{subsets Element::owner} (opposite State::doActivity)
**/
/**
 * A_entry_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  state : State [0..1]{subsets Element::owner} (opposite State::entry)
**/
/**
 * A_exit_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  state : State [0..1]{subsets Element::owner} (opposite State::exit)
**/
/**
 * A_redefinedState_state [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Owned Ends
 * 
 *  state : State [0..*]
 * {subsets A_redefinedElement_redefinableElement
 * ::redefinableElement}
 * (opposite
 * State::redefinedState)
**/
/**
 * A_redefinitionContext_state [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Generalizations
 * 
 * A_redefinitionContext_redefinableElement
 * 
 * Owned Ends
 * 
 * state : State [0..*]
 * {subsets A_redefinitionContext_redefinableElement
 * ::redefinableElement}
 * (opposite
 * State::redefinitionContext)
**/
/**
 * A_region_state [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  State::region
 *  Region::state
**/
/**
 * A_stateInvariant_owningState [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  owningState : State [0..1]{subsets Constraint::context} (opposite State::stateInvariant)
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
 *  State::submachine
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
 *  State::submachine
**/