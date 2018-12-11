/**~value~
 * LiteralBoolean [Class]
 * 
 * Description
 * 
 * A LiteralBoolean is a specification of a Boolean value.
 * 
 * Diagrams
 * 
 * Literals
 * 
 * Generalizations
 * 
 * LiteralSpecification
 * 
 * Attributes
 * 
 *  value : Boolean [1..1] = false
 * 
 * The specified Boolean value.
 * 
 * Operations
 * 
 *  booleanValue() : Boolean {redefines ValueSpecification::booleanValue()}
 * The query booleanValue() gives the value.
 * 
 * body: value
 * 
 *  isComputable() : Boolean {redefines ValueSpecification::isComputable()}
 * The query isComputable() is redefined to be true.
 * 
 * body: true
**/