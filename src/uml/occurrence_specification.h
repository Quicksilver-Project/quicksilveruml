/**~interaction~
 * A_before_toAfter [Association]
 * 
 * Diagrams
 * 
 * Occurrences
 * 
 * Member Ends
 * 
 *  GeneralOrdering::before
 *  OccurrenceSpecification::toAfter
**/
/**
 * A_covered_events [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Owned Ends
 * 
 *  events : OccurrenceSpecification [0..*]{ordered, subsets Lifeline::coveredBy} (opposite
 * OccurrenceSpecification::covered)
**/
/**
 * A_toBefore_after [Association]
 * 
 * Diagrams
 * 
 * Occurrences
 * 
 * Member Ends
 * 
 *  OccurrenceSpecification::toBefore
 *  GeneralOrdering::after
**/