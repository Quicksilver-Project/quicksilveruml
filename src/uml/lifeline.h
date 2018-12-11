/**~interaction~
 * A_covered_coveredBy [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Member Ends
 * 
 *  InteractionFragment::covered
 *  Lifeline::coveredBy
**/
/**
 * A_decomposedAs_lifeline [Association]
 * 
 * Diagrams
 * 
 * Lifelines, Interaction Uses
 * 
 * Owned Ends
 * 
 *  lifeline : Lifeline [1..1] (opposite Lifeline::decomposedAs)
**/
/**
 * A_lifeline_interaction [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Member Ends
 * 
 *  Interaction::lifeline
 *  Lifeline::interaction
**/
/**
 * A_represents_lifeline [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Owned Ends
 * 
 *  lifeline : Lifeline [0..*] (opposite Lifeline::represents)
**/
/**
 * A_selector_lifeline [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Owned Ends
 * 
 *  lifeline : Lifeline [0..1]{subsets Element::owner} (opposite Lifeline::selector)
**/