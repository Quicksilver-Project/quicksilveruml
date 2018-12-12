#include "value_specification.h"

/**~value~
 * A_expr_timeExpression [Association]
 * 
 * Diagrams
 * 
 * Time
 * 
 * Owned Ends
 * 
 *  timeExpression : TimeExpression [0..1]{subsets Element::owner} (opposite TimeExpression::expr)
**/
/**
 * A_expr_duration [Association]
 * 
 * Diagrams
 * 
 * Time
 * 
 * Owned Ends
 * 
 *  duration : Duration [0..1]{subsets Element::owner} (opposite Duration::expr)
**/
/**
 * A_operand_expression [Association]
 * 
 * Diagrams
 * 
 * Expressions
 * 
 * Owned Ends
 * 
 *  expression : Expression [0..1]{subsets Element::owner} (opposite Expression::operand)
**/