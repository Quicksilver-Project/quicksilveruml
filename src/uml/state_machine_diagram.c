/**~UML Diagram Interchange~
 * UMLStateMachineDiagram [Class]
 * 
 * Description
 * 
 * Shows a StateMachine and its elements. Also see Annex A.
 * 
 * Generalizations
 * 
 * UMLBehaviorDiagram
 * 
 * Attributes
 * 
 *  isCollapseStateIcon : Boolean [1..1] = true
 * 
 * Indicates whether UMLShapes for composite States shall contain a small icon distinguishing them from noncomposite
 * States.
 * 
 *  isInheritedDashed : Boolean [1..1] = false
 * 
 * Indicates how borders shall be rendered on UMLShapes that have an inherited State as modelElement.
 * 
 *  isTransitionOriented : Boolean [1..1] = false
 * 
 * Indicates whether properties of Transitions shall be shown graphically.
 * 
 * Association Ends
 * 
 *  modelElement : StateMachine [1..1]{redefines UMLBehaviorDiagram::modelElement} (opposite
 * A_UMLStateMachine_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Constraints
 * 
 *  isd_isl_xor
 * 
 * isInheritedDashed and isInheritedLighter cannot both have a value of true.
 * 
 * inv: not (isInheritedDashed and isInheritedLighter)
 * 
 *  isd_isl_req
 * 
 * Either isInheritedDashed or isInheritedLighter must have a value of true if the diagram shows any inherited
 * states.
 * 
 * inv:
**/