/**~interaction~
 * A_covered_stateInvariant [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Owned Ends
 * 
 *  stateInvariant : StateInvariant [0..*]{subsets Lifeline::coveredBy} (opposite StateInvariant::covered)
**/
/**
 * A_invariant_stateInvariant [Association]
 * 
 * Diagrams
 * 
 * Interactions
 * 
 * Owned Ends
 *  stateInvariant : StateInvariant [0..1]{subsets Element::owner} (opposite StateInvariant::invariant)
**/
/**
 * A_stateInvariant_owningState [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Owned Ends
 * 
 *  owningState : State [0..1]{subsets Constraint::context} (opposite State::stateInvariant)
**/