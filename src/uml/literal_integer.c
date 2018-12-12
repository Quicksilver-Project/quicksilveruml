/**~value~
 * LiteralInteger [Class]
 * 
 * Description
 * 
 * A LiteralInteger is a specification of an Integer value.
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
 *  value : Integer [1..1] = 0
 * 
 * The specified Integer value.
 * 
 * Operations
 * 
 *  integerValue() : Integer {redefines ValueSpecification::integerValue()}
 * 
 * The query integerValue() gives the value.
 * 
 * body: value
 * 
 *  isComputable() : Boolean {redefines ValueSpecification::isComputable()}
 * 
 * The query isComputable() is redefined to be true.
 * 
 * body: true
**/