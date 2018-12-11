/**~value~
 * Duration [Class]
 * 
 * Description
 * 
 * A Duration is a ValueSpecification that specifies the temporal distance between two time instants.
 * 
 * Diagrams
 * 
 * Time, Intervals
 * 
 * Generalizations
 * 
 * ValueSpecification
 * 
 * Association Ends
 * 
 *  ♦ expr : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite A_expr_duration::duration)
 * 
 * A ValueSpecification that evaluates to the value of the Duration.
 * 
 *  observation : Observation [0..*] (opposite A_observation_duration::duration)
 * 
 * Refers to the Observations that are involved in the computation of the Duration value.
 * 
 * Constraints
 * 
 *  no_expr_requires_observation
 * 
 * If a Duration has no expr, then it must have a single observation that is a DurationObservation.
 * 
 * inv: expr = null implies (observation->size() = 1 and observation-
 * >forAll(oclIsKindOf(DurationObservation)))
 **/