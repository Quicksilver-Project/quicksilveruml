/**~common behavior~
 * CallEvent [Class]
 * 
 * Description
 * 
 * A CallEvent models the receipt by an object of a message invoking a call of an Operation.
 * 
 * Diagrams
 * 
 * Events
 * 
 * Generalizations
 * 
 * MessageEvent
 * 
 * Association Ends
 * 
 *  operation : Operation [1..1] (opposite A_operation_callEvent::callEvent)
 * 
 * Designates the Operation whose invocation raised the CalEvent.
**/