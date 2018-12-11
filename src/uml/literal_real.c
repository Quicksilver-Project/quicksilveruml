/**~value~
 * LiteralReal [Class]
 * 
 * Description
 * 
 * A LiteralReal is a specification of a Real value.
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
 *  value : Real [1..1]
 * 
 * The specified Real value.
 * 
 * Operations
 * 
 *  isComputable() : Boolean {redefines ValueSpecification::isComputable()}
 * 
 * The query isComputable() is redefined to be true.
 * body: true
 * 
 *  realValue() : Real {redefines ValueSpecification::realValue()}
 * 
 * The query realValue() gives the value.
 * body: value
**/