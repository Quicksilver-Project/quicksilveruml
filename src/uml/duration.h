/**~value~
 * A_expr_duration [Association]
 * 
 * Diagrams
 * 
 * Time
 * 
 * Owned Ends
 * 
 *  duration : Duration [0..1]{subsets Element::owner} (opposite Duration::expr)
**/
/**
 * A_observation_duration [Association]
 * 
 * Diagrams
 * 
 * Time
 * 
 * Owned Ends
 * 
 *  duration : Duration [0..1] (opposite Duration::observation)
**/
/**
 * A_specification_durationConstraint [Association]
 * 
 * Diagrams
 * 
 * Intervals
 * 
 * Generalizations
 * 
 * A_specification_intervalConstraint
 * 
 * Owned Ends
 * 
 *  durationConstraint : DurationConstraint [0..1]{redefines
 * A_specification_intervalConstraint::intervalConstraint} (opposite DurationConstraint::specification)
**/