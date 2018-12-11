/**~value~
 * TimeConstraint [Class]
 * 
 * Description
 * 
 * A TimeConstraint is a Constraint that refers to a TimeInterval.
 * 
 * Diagrams
 * 
 * Intervals
 * 
 * Generalizations
 * 
 * IntervalConstraint
 * 
 * Attributes
 * 
 *  firstEvent : Boolean [0..1] = true
 * 
 * The value of firstEvent is related to the constrainedElement. If firstEvent is true, then the corresponding
 * observation event is the first time instant the execution enters the constrainedElement. If firstEvent is false,
 * then the corresponding observation event is the last time instant the execution is within the
 * constrainedElement.
 * 
 * Association Ends
 * 
 *  ♦ specification : TimeInterval [1..1]{redefines IntervalConstraint::specification} (opposite
 * A_specification_timeConstraint::timeConstraint)
 * 
 * TheTimeInterval constraining the duration.
 * 
 * Constraints
 * 
 *  has_one_constrainedElement
 * 
 * A TimeConstraint has one constrainedElement.
 * inv: constrainedElement->size() = 1
**/