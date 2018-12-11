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
 * A_fragment_enclosingInteraction [Association]
 * 
 * Diagrams
 * 
 * Interactions
 * 
 * Member Ends
 * 
 *  Interaction::fragment
 *  InteractionFragment::enclosingInteraction
**/
/**
 * A_fragment_enclosingOperand [Association]
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Member Ends
 * 
 *  InteractionOperand::fragment
 *  InteractionFragment::enclosingOperand
**/
/**
 * A_generalOrdering_interactionFragment [Association]
 * 
 * Diagrams
 * 
 * Owned Ends
 * 
 *  interactionFragment : InteractionFragment [0..1]{subsets Element::owner} (opposite
 * InteractionFragment::generalOrdering)
**/