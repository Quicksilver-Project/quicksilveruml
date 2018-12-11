/**~simple classifier~
 * Enumeration [Class]
 * 
 * Description
 * 
 * An Enumeration is a DataType whose values are enumerated in the model as EnumerationLiterals.
 * 
 * Diagrams
 * 
 * DataTypes
 * 
 * Generalizations
 * 
 * DataType
 * 
 * Association Ends
 * 
 *  ♦ ownedLiteral : EnumerationLiteral [0..*]{ordered, subsets Namespace::ownedMember} (opposite
 * EnumerationLiteral::enumeration)
 * 
 * The ordered set of literals owned by this Enumeration.
 * 
 * Constraints
 * 
 *  immutable
 * inv: ownedAttribute->forAll(isReadOnly)
**/