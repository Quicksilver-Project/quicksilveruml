/**~common behavior~
 * TimeEvent [Class]
 * 
 * Description
 * 
 * A TimeEvent is an Event that occurs
 * at a specific point in time.
 * 
 * Diagrams
 * 
 * Events
 * 
 * Generalizations
 * 
 * Event
 * 
 * Attributes
 * 
 *  isRelative : Boolean [1..1] = false
 * 
 * Specifies whether the TimeEvent
 * is specified as an absolute or relative time.
 * 
 * Association Ends
 * 
 *  ♦ when : TimeExpression [1..1]
 * {subsets Element::ownedElement}
 * (opposite A_when_timeEvent::timeEvent)
 * 
 * Specifies the time of the TimeEvent.
 * 
 * Constraints
 * 
 *  when_non_negative
 * 
 * The ValueSpecification when must return
 * a non-negative Integer.
 * 
 * inv: when.integerValue() >= 0
**/