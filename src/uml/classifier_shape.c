/**~UML Diagram Interchange~
 * UMLClassifierShape [Class]
 * 
 * Description
 * 
 * Shows Classifiers with shapes that may have compartments.
 * 
 * Generalizations
 * 
 * UMLCompartmentableShape
 * 
 * Attributes
 * 
 *  isIndentForVisibility : Boolean [1..1] = false
 * 
 * For modelElements that are shown with feature compartments, indicates whether features are shown indented
 * under visibility headings.
 * 
 *  isDoubleSided : Boolean [1..1] = false
 * 
 * For modelElements that are Classes with true as a value for isActive that are shown as rectangles, indicates
 * whether the vertical sides shall be rendered as double lines.
 * 
 * Association Ends
 * 
 *  modelElement : Classifier [1..1]{redefines UMLDiagramElement::modelElement} (opposite
 * A_UMLClassifierShape_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Restricts UMLClassifierShapes to showing exactly one Classifier.
 * 
 * Constraints
 * 
 *  doubleSided_isActive
 * 
 * isDoubleSided may be true only when modelElement is an active Class.
 * 
 * inv: isDoubleSided implies (modelElement->forAll(oclIsKindOf(Class)) and
 * modelElement.oclAsType(Class)->forAll(isActive))
**/