/**~UML Diagram Interchange~
 * UMLLabel [Class]
 * 
 * Description
 * 
 * The most general class for UML shapes that are rendered only as text.
 * 
 * Generalizations
 * 
 * UMLShape
 * 
 * Specializations
 * 
 * UMLAssociationEndLabel, UMLMultiplicityLabel, UMLKeywordLabel, UMLNameLabel,
 * UMLRedefinesLabel, UMLStereotypePropertyValueLabel, UMLTypedElementLabel,
 * UMLInteractionTableLabel
 * 
 * Attributes
 * 
 *  text : String [1..1]
 * 
 * String to be rendered.
 * 
 * Constraints
 * 
 *  modelElement_mult
 * 
 * UMLLabels must have no more than one modelElement.
 * 
 * inv: modelElement->size() <= 1
 * 
 *  no_icon
 * 
 * UMLLabels must have the value of false for isIcon.
 * 
 * inv: isIcon=false
**/