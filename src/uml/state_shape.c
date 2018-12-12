/**~UML Diagram Interchange~
 * UMLStateShape [Class]
 * 
 * Description
 * 
 * Generalizations
 * 
 * UMLCompartmentableShape
 * 
 * Attributes
 * 
 *  isTabbed : Boolean [1..1] = false
 * 
 * Association Ends
 * 
 *  modelElement : State [1..*]
 * {redefines UMLDiagramElement::modelElement}
 * (opposite
 * A_UMLStateShape_modelElement_umlDiagramElement
 * ::umlDiagramElement)
 * 
 * Constraints
 * 
 *  state_list
 * 
 * UMLStateShapes may have multiple modelElements
 * only when their outgoing Transitions
 * have no triggers or
 * effects, and target the same
 * junction State that has one
 * outgoing Transition.
 * 
 * inv: (modelElement->size() > 1) implies
 * ( modelElement->forAll(outgoing->forAll(trigger->isEmpty() and
 * effect->isEmpty()
 * and
 * target.oclIsKindOf(Pseudostate) and
 * target.oclAsType(Pseudostate).kind = PseudostateKind::junction and
 * target.outgoing-
 * >size() = 1))
 * and modelElement.outgoing.target->asSet()->size()=1)
**/