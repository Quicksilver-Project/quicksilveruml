/**~UML Diagram Interchange~
 * UMLCompartment [Class]
 * 
 * Description
 * 
 * A separated portion of a UMLCompartmentableShape.
 * 
 * Generalizations
 * 
 * UMLDiagramElement
 * 
 * Association Ends
 * 
 *  ♦ elementInCompartment : UMLDiagramElement [0..*]{ordered, subsets DiagramElement::ownedElement}
 * (opposite A_UMLCompartment_elementInCompartment_owningCompartment::owningCompartment)
 * 
 * Contents of the compartment.
 * 
 * Constraints
 * 
 *  no_modelElement
 * 
 * UMLCompartments have no modelElements.
 * 
 * inv: modelElement->isEmpty() 
**/