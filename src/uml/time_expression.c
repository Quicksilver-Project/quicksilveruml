/**~value~
 * TimeExpression [Class]
 * 
 * Description
 * 
 * A TimeExpression is a ValueSpecification that represents a time value.
 * 
 * Diagrams
 * 
 * Time, Intervals, Events
 * 
 * Generalizations
 * 
 * ValueSpecification
 * 
 * Association Ends
 * 
 *  ♦ expr : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_expr_timeExpression::timeExpression)
 * 
 * A ValueSpecification that evaluates to the value of the TimeExpression.
 * 
 *  observation : Observation [0..*] (opposite A_observation_timeExpression::timeExpression)
 * 
 * Refers to the Observations that are involved in the computation of the TimeExpression value.
 * 
 * Constraints
 * 
 *  no_expr_requires_observation
 * 
 * If a TimeExpression has no expr, then it must have a single observation that is a TimeObservation.
 * inv: expr = null implies (observation->size() = 1 and observation-
 * >forAll(oclIsKindOf(TimeObservation)))
**/