/**~UML Diagram Interchange~
 * UMLAssociationEndLabel [Class]
 * 
 * Description
 * 
 * Shows text about Properties that are Association ends.
 * 
 * Generalizations
 * 
 * UMLLabel
 * 
 * Association Ends
 * 
 *  modelElement : Property [1..1]{redefines UMLDiagramElement::modelElement} (opposite
 * A_UMLAssociationEndLabel_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Restricts UMLAssociationEndLabels to show only Properties (that are AssociationEnds, see constraint).
 * 
 * Constraints
 * 
 *  modelElement_type
 * 
 * modelElement must be an Association end.
 * 
 * inv: not modelElement->forAll(association->isEmpty())
**/