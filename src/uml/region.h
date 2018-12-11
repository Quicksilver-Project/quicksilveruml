/**~state machine~
 * A_extendedRegion_region [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Owned Ends
 * 
 *  region : Region [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Region::extendedRegion)
**/
/**
 * A_redefinitionContext_region [Association]
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
 *  region : Region [0..*]{subsets A_redefinitionContext_redefinableElement::redefinableElement} (opposite
 * Region::redefinitionContext)
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
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
 * 
 *  Region::state
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
 * A_subvertex_container [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Region::subvertex
 * 
 *  Vertex::container
**/
/**
 * A_transition_container [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Region::transition
 * 
 *  Transition::container
**/