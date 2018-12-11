/**~UML Diagram Interchange~
 * UMLActivityDiagram [Class]
 * 
 * Description
 * 
 * Shows an Activity and its elements. Also see Annex A.
 * 
 * Generalizations
 * 
 * UMLBehaviorDiagram
 * 
 * Attributes
 * 
 *  isActivityFrame : Boolean [1..1] = false
 * 
 * Indicates whether the UMLActivityDiagram shall be shown with a frame that is a round-cornered rectangle
 * without a pentagonal header.
 * 
 * Association Ends
 * 
 *  modelElement : Activity [1..1]{redefines UMLBehaviorDiagram::modelElement} (opposite
 * A_UMLActivityDiagram_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Restricts UMLActivityDiagrams to show Activities.
 * 
 * Constraints
 * 
 *  frame
 * 
 * isFrame and isActivityFrame must not be true at the same time.
 * 
 * inv: not (isActivityFrame and isFrame)
**/