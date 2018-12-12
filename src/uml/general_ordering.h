#include "named_element.h"

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
 * A_generalOrdering_interactionFragment [Association]
 * 
 * Diagrams
 * 
 * Owned Ends
 * 
 *  interactionFragment : InteractionFragment [0..1]{subsets Element::owner} (opposite
 * InteractionFragment::generalOrdering)
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