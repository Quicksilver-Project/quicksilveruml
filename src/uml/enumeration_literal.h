/**~simple classifier~
 * A_ownedLiteral_enumeration [Association]
 * 
 * Diagrams
 * 
 * DataTypes
 * 
 * Member Ends
 * 
 *  Enumeration::ownedLiteral
 * 
 *  EnumerationLiteral::enumeration
**/
/**
 * A_classifier_enumerationLiteral [Association]
 * 
 * Diagrams
 * 
 * DataTypes
 * 
 * Generalizations
 * 
 * A_classifier_instanceSpecification
 * 
 * Owned Ends
 * 
 *  enumerationLiteral : EnumerationLiteral [0..*]{redefines
 * A_classifier_instanceSpecification::instanceSpecification} (opposite EnumerationLiteral::classifier)
**/