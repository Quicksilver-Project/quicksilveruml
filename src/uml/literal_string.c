/**~value~
 * LiteralString [Class]
 * 
 * Description
 * 
 * A LiteralString is a specification of a String value.
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
 *  value : String [0..1]
 * 
 * The specified String value.
 * 
 * 8.6.13.5 Operations
 * 
 *  isComputable() : Boolean {redefines ValueSpecification::isComputable()}
 * 
 * The query isComputable() is redefined to be true.
 * body: true
 * 
 *  stringValue() : String {redefines ValueSpecification::stringValue()}
 * 
 * The query stringValue() gives the value.
 * body: value
**/