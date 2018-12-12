/**~UML Diagram Interchange~
 * UMLStereotypePropertyValueLabel [Class]
 * 
 * Description
 * 
 * For showing Property values of Stereotypes
 * applied to UML abstract syntax elements.
 * 
 * Generalizations
 * 
 * UMLLabel
 * 
 * Association Ends
 * 
 *  modelElement : Property [1..1]
 * {redefines UMLDiagramElement::modelElement}
 * (opposite
 * A_UMLStereotypePropertyValueLabel_modelElement_umlDiagramElement
 * ::umlDiagramElement)
 * 
 * A Property of a Stereotype 
 * applied to the stereotypedElement.
 * 
 *  stereotypedElement : Element [1..1] (opposite
 * A_UMLStereotypePropertyValueLabel_stereotypedElement_labelShowingStereotypeValue
 * ::labelShowingStereotypeValue)
 * 
 * Element to which a Stereotype
 * having the modelElement (Property) is applied.
 * 
 * Constraints
 * 
 *  prop_on_stereotype
 * 
 * modelElement is a Property of a Stereotype.
 * 
 * inv: modelElement->forAll(classifier.oclIsKindOf(Stereotype))
 * 
 *  stereotypedElement
 * 
 * Property must be on Stereotype
 * applied to stereotypedElement.
 * 
 * inv:
**/