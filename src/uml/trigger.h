#include "named_element.h"
/**~common behavior~
 * A_event_trigger [Association]
 * 
 * Diagrams
 * 
 * Events
 * 
 * Owned Ends
 * 
 *  trigger : Trigger [0..*]
 * (opposite Trigger::event)
**/
/**
 * A_port_trigger [Association]
 * 
 * Diagrams
 * 
 * Events
 * 
 * Owned Ends
 * 
 *  trigger : Trigger [0..*]
 * (opposite Trigger::port)
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