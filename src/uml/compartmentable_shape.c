/**~UML Diagram Interchange~
 * UMLCompartmentableShape [Class]
 * 
 * Description
 * 
 * The most general class for UML elements that may have contents shown in separated portions inside the shape.
 * 
 * Generalizations
 * 
 * UMLShape
 * 
 * Specializations
 * 
 * UMLClassifierShape, UMLStateShape
 * 
 * Association Ends
 * 
 *  ♦ compartment : UMLCompartment [0..*]{ordered, subsets DiagramElement::ownedElement} (opposite
 * A_UMLCompartmentableShape_compartmentedShape_shape::compartmentedShape)
 * 
 * Separated portions of the shape.
**/