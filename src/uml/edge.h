#include "diagram.h"

/**~UML Diagram Interchange~
 * A_UMLEdge_source_sourceEdge [Association]
 * 
 *  Owned Ends
 * 
 *  sourceEdge : UMLEdge [0..*]{redefines A_source_sourceEdge::sourceEdge} (opposite UMLEdge::source)
**/
/**
 * A_UMLEdge_target_targetEdge [Association]
 * 
 * Owned Ends
 * 
 *  targetEdge : UMLEdge [0..*]{redefines A_target_targetEdge::targetEdge} (opposite UMLEdge::target)
**/