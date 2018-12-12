/**~common behavior~
 * Trigger [Class]
 * 
 * Description
 * 
 * A Trigger specifies a specific point at
 * which an Event occurrence may trigger
 * an effect in a Behavior.
 * A Trigger may be
 * qualified by the Port on
 * which the Event occurred.
 * 
 * Diagrams
 * 
 * Events,
 * Behavior State Machines,
 * Accept Event Actions
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Association Ends
 * 
 *  event : Event [1..1]
 * (opposite A_event_trigger::trigger)
 * 
 * The Event that detected by the Trigger.
 * 
 *  port : Port [0..*]
 * (opposite A_port_trigger::trigger)
 * 
 * A optional Port of through 
 * which the given effect
 * is detected.
 * 
 * Constraints
 * 
 *  trigger_with_ports
 * 
 * If a Trigger specifies
 * one or more ports,
 * the event of the Trigger
 * must be a MessageEvent.
 * 
 * inv: port->notEmpty() implies event.oclIsKindOf(MessageEvent)
**/