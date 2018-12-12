/**~value~
 * TimeObservation [Class]
 * 
 * Description
 * 
 * A TimeObservation is a reference to a time instant
 * during an execution.
 * It points out the NamedElement
 * in the model to
 * observe and whether the observation
 * is when this NamedElement is
 * entered or when it is exited.
 * 
 * Diagrams
 * 
 * Time
 * 
 * Generalizations
 * 
 * Observation
 * 
 * Attributes
 * 
 *  firstEvent : Boolean [1..1] = true
 * 
 * The value of firstEvent is related to the event.
 * If firstEvent is true,
 * then the corresponding observation event is
 * the first time instant the execution enters the event Element.
 * If firstEvent is false, then the corresponding
 * observation event is the time
 * instant the execution exits the event Element.
 * 
 * Association Ends
 * 
 *  event : NamedElement [1..1]
 * (opposite A_event_timeObservation
 * ::timeObservation)
 * 
 * The TimeObservation is determined by the
 * entering or exiting of the
 * event Element during execution.
**/