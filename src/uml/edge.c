/**~UML Diagram Interchange~
 * UMLEdge [Class]
 * 
 * Description
 * 
 * The most general class for UML diagram elements that are rendered as lines.
 * 
 * Generalizations
 * 
 * Edge, UMLDiagramElement
 * 
 * Association Ends
 * 
 *  source : UMLDiagramElement [1..1]{redefines Edge::source} (opposite
 * A_UMLEdge_source_sourceEdge::sourceEdge)
 * 
 * Restricts the sources of UMLEdges to UMLDiagramElements.
 * 
 *  target : UMLDiagramElement [1..1]{redefines Edge::target} (opposite
 * A_UMLEdge_target_targetEdge::targetEdge)
 * 
 * Restricts the targets of UMLEdges to UMLDiagramElements.
**/