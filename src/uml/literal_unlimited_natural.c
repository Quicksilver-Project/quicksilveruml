/**~value~
 * LiteralUnlimitedNatural [Class]
 * 
 * Description
 * 
 * A LiteralUnlimitedNatural is a specification of an UnlimitedNatural number.
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
 *  value : UnlimitedNatural [1..1] = 0
 * 
 * The specified UnlimitedNatural value.
 * 
 * Operations
 * 
 *  isComputable() : Boolean {redefines ValueSpecification::isComputable()}
 * 
 * The query isComputable() is redefined to be true.
 * body: true
 * 
 *  unlimitedValue() : UnlimitedNatural {redefines ValueSpecification::unlimitedValue()}
 * 
 * The query unlimitedValue() gives the value.
 * body: value
**/