#include "typed_element.h"
#include "activity_node.h"
/**~activity~ 
 * A_inState_objectNode [Association]
 * 
 * Diagrams
 * 
 * Object Nodes
 * 
 * Owned Ends
 * 
 *  objectNode : ObjectNode [0..*] (opposite ObjectNode::inState)
**/
/**
 * A_selection_objectNode [Association]
 * 
 * Diagrams
 * 
 * Object Nodes
 * 
 * Owned Ends
 * 
 *  objectNode : ObjectNode [0..*] (opposite ObjectNode::selection)
**/
/**
 * A_upperBound_objectNode [Association]
 * 
 * Diagrams
 * 
 * Object Nodes
 * 
 * Owned Ends
 * 
 *  objectNode : ObjectNode [0..1]{subsets Element::owner} (opposite ObjectNode::upperBound)
**/