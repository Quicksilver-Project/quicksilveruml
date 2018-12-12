#include "element.h"
/**~action~
 * A_end_linkEndData [Association]
 * 
 * Diagrams
 * 
 * Link End Data
 * 
 * Owned Ends
 * 
 *  linkEndData : LinkEndData [0..*] (opposite LinkEndData::end)
**/
/**
 * A_qualifier_linkEndData [Association]
 * 
 * Diagrams
 * 
 * Link End Data
 * 
 * Owned Ends
 * 
 *  linkEndData : LinkEndData [1..1]{subsets Element::owner} (opposite LinkEndData::qualifier)
**/
/**
 * A_value_linkEndData [Association]
 * 
 * Diagrams
 * 
 * Link End Data
 * 
 * Owned Ends
 * 
 *  linkEndData : LinkEndData [0..1] (opposite LinkEndData::value)
**/