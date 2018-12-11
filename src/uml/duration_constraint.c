/**~value~
 * DurationConstraint [Class]
 * 
 * Description
 * 
 * A DurationConstraint is a Constraint that refers to a DurationInterval.
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
 *  firstEvent : Boolean [0..2]
 * 
 * The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the
 * corresponding observation event is the first time instant the execution enters constrainedElement[i]. If
 * firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within
 * constrainedElement[i].
 * 
 * Association Ends
 * 
 *  ♦ specification : DurationInterval [1..1]{redefines IntervalConstraint::specification} (opposite
 * A_specification_durationConstraint::durationConstraint)
 * 
 * The DurationInterval constraining the duration.
 * 
 * Constraints
 * 
 *  first_event_multiplicity
 * 
 * The multiplicity of firstEvent must be 2 if the multiplicity of constrainedElement is 2. Otherwise the
 * multiplicity of firstEvent is 0.
 * 
 * inv: if (constrainedElement->size() = 2)
 * then (firstEvent->size() = 2) else (firstEvent->size() = 0)
 * endif
 * 
 *  has_one_or_two_constrainedElements
 * 
 * A DurationConstraint has either one or two constrainedElements.
 * 
 * inv: constrainedElement->size() = 1 or constrainedElement->size()=2
**/