/**~simple classifier~
 * EnumerationLiteral [Class]
 * 
 * Description
 * 
 * An EnumerationLiteral is a user-defined data value for an Enumeration.
 * 
 * Diagrams
 * 
 * DataTypes
 * 
 * Generalizations
 * 
 * InstanceSpecification
 * 
 * Association Ends
 * 
 *  /classifier : Enumeration [1..1]{redefines InstanceSpecification::classifier} (opposite
 * A_classifier_enumerationLiteral::enumerationLiteral)
 * 
 * The classifier of this EnumerationLiteral derived to be equal to its Enumeration.
 * 
 *  enumeration : Enumeration [1..1]{subsets NamedElement::namespace} (opposite Enumeration::ownedLiteral)
 * 
 * The Enumeration that this EnumerationLiteral is a member of.
 * 
 * Operations
 * 
 *  classifier() : Enumeration
 * 
 * Derivation of Enumeration::/classifier
 * body: enumeration
**/