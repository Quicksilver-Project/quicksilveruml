/**~simple classifier~
 * DataType [Class]
 * 
 * Description
 * 
 * A DataType is a type whose instances are identified only by their value.
 * 
 * Diagrams
 * 
 * DataTypes, Properties, Operations
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Specializations
 * 
 * Enumeration, PrimitiveType
 * 
 * Association Ends
 * 
 *  ♦ ownedAttribute : Property [0..*]{ordered, subsets Classifier::attribute, subsets Namespace::ownedMember}
 * (opposite Property::datatype)
 * 
 * The attributes owned by the DataType.
 * 
 *  ♦ ownedOperation : Operation [0..*]{ordered, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite Operation::datatype)
 * 
 * The Operations owned by the DataType.
**/