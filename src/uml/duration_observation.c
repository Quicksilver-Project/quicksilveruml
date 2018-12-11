/**~value~
 * DurationObservation [Class]
 * 
 * Description
 * 
 * A DurationObservation is a reference to a duration during an execution. It points out the NamedElement(s) in the model
 * to observe and whether the observations are when this NamedElement is entered or when it is exited.
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
 *  firstEvent : Boolean [0..2]
 * 
 * The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding
 * observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the
 * corresponding observation event is the time instant the execution exits event[i].
 * 
 * Association Ends
 * 
 *  event : NamedElement [1..2]{ordered} (opposite A_event_durationObservation::durationObservation)
 * 
 * The DurationObservation is determined as the duration between the entering or exiting of a single event
 * Element during execution, or the entering/exiting of one event Element and the entering/exiting of a second.
 * 
 * Constraints
 * 
 *  first_event_multiplicity
 * 
 * The multiplicity of firstEvent must be 2 if the multiplicity of event is 2. Otherwise the multiplicity of firstEvent
 * is 0.
 * 
 * inv: if (event->size() = 2)
 * then (firstEvent->size() = 2) else (firstEvent->size() = 0)
 * endif
**/