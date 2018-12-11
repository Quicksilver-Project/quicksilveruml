/**~UML Diagram Interchange~
 * UMLInteractionDiagram [Class]
 * 
 * Description
 * 
 * Shows an Interaction and its elements. Also see Annex A.
 * 
 * Generalizations
 * 
 * UMLBehaviorDiagram
 * 
 * Attributes
 * 
 *  kind : UMLInteractionDiagramKind [1..1] = sequence
 * 
 * Indicates how an Interaction shall be shown.
 * 
 *  isLifelineDashed : Boolean [1..1] = false
 * 
 * Indicates whether lifelines on the diagram shall be rendered as dashed.
 * 
 * Association Ends
 * 
 *  modelElement : Interaction [1..1]{redefines UMLBehaviorDiagram::modelElement} (opposite
 * A_UMLInteractionDiagram_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Restricts UMLInteractionDiagrams to showing Interactions.
**/