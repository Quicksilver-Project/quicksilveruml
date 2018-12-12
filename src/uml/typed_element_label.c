/**~UML Diagram Interchange~
 * UMLTypedElementLabel [Class]
 * 
 * Description
 * 
 * For showing text about Slots,
 * InstanceSpecifications,
 * InstanceValues,
 * or elements with a type,
 * such as TypedElements
 * or Connectors.
 * 
 * Generalizations
 * 
 * UMLLabel
 * 
 * Constraints
 * 
 *  modelElement_mult
 * 
 * UMLTypedElementLabels must have exactly one modelElement.
 * 
 * inv: modelElement->size() = 1 
 * 
 *  modelElement_type
 * 
 * modelElement must be a Slot,
 * InstanceSpecification, InstanceValue,
 * or an element with a type, such as a
 * TypedElement or Connector.
 * 
 * Cannot be expressed in OCL 
**/