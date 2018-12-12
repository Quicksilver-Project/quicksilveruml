#include "namespace.h"
#include "redefinable_element.h"
/**~state machine~
 * A_effect_transition [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  transition : Transition [0..1]
 * {subsets Element::owner}
 * (opposite Transition::effect)
**/
/**
 * A_guard_transition [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Specializations
 * 
 * A_preCondition_protocolTransition
 * 
 * Owned Ends
 * 
 *  transition : Transition [0..1]
 * {subsets Constraint::context}
 * (opposite Transition::guard)
**/
/**
 * A_incoming_target_vertex [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Vertex::incoming
 *  Transition::target
**/
/**
 * A_outgoing_source_vertex [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Vertex::outgoing
 *  Transition::source
**/
/**
 * A_redefinedTransition_transition [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Owned Ends
 * 
 *  transition : Transition [0..*]
 * {subsets A_redefinedElement_redefinableElement
 * ::redefinableElement} (opposite
 * Transition::redefinedTransition)
 * 
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
**/
/**
 * A_redefinitionContext_transition [Association]
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
 *  transition : Transition [0..*]
 * {subsets A_redefinitionContext_redefinableElement
 * ::redefinableElement}
 * (opposite Transition::redefinitionContext)
 * 
 * UMLR-685: StateMachine Vertex needs to be
 * made a kind of RedefinableElement
 * instead of State
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
 *  Transition::container
**/
/**
 * A_trigger_transition [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  transition : Transition [0..1]
 * {subsets Element::owner}
 * (opposite Transition::trigger)
**/