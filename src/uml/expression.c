/**~value~
 * Expression [Class]
 * 
 * Description
 * 
 * An Expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and
 * has a possibly empty sequence of operands that are ValueSpecifications. It denotes a (possibly empty) set of values
 * when evaluated in a context.
 * 
 * Diagrams
 * 
 * Expressions
 * 
 * Generalizations
 * 
 * ValueSpecification
 * 
 * Specializations
 * 
 * StringExpression
 * 
 * Attributes
 * 
 *  symbol : String [0..1]
 * 
 * The symbol associated with this node in the expression tree.
 * 
 * Association Ends
 * 
 *  ♦ operand : ValueSpecification [0..*]{ordered, subsets Element::ownedElement} (opposite
 * A_operand_expression::expression)
 * 
 * Specifies a sequence of operand ValueSpecifications.
**/