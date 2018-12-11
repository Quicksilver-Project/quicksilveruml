/**~value~
 * StringExpression [Class]
 * 
 * Description
 * 
 * A StringExpression is an Expression that specifies a String value that is derived by concatenating a sequence of
 * operands with String values or a sequence of subExpressions, some of which might be template parameters.
 * 
 * Diagrams
 * 
 * Expressions, Namespaces
 * 
 * Generalizations
 * 
 * TemplateableElement, Expression
 * 
 * Association Ends
 * 
 *  owningExpression : StringExpression [0..1]{subsets Element::owner} (opposite
 * StringExpression::subExpression)
 * 
 * The StringExpression of which this StringExpression is a subExpression.
 * 
 *  ♦ subExpression : StringExpression [0..*]{ordered, subsets Element::ownedElement} (opposite
 * StringExpression::owningExpression)
 * 
 * The StringExpressions that constitute this StringExpression.
 * 
 * Operations
 * 
 *  stringValue() : String {redefines ValueSpecification::stringValue()}
 * The query stringValue() returns the String resulting from concatenating, in order, all the component String
 * values of all the operands or subExpressions that are part of the StringExpression.
 * body: if subExpression->notEmpty()
 * then subExpression->iterate(se; stringValue: String = '' |
 * stringValue.concat(se.stringValue()))
 * else operand->iterate(op; stringValue: String = '' | stringValue.concat(op.stringValue()))
 * endif
 * 
 * Constraints
 * 
 *  operands
 * 
 * All the operands of a StringExpression must be LiteralStrings
 * inv: operand->forAll (oclIsKindOf (LiteralString))
 * 
 *  subexpressions
 * 
 * If a StringExpression has sub-expressions, it cannot have operands and vice versa (this avoids the problem of
 * having to define a collating sequence between operands and subexpressions).
 * inv: if subExpression->notEmpty() then operand->isEmpty() else operand->notEmpty() endif
**/