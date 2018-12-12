/**~value~
 * OpaqueExpression [Class]
 * 
 * Description
 * 
 * An OpaqueExpression is a ValueSpecification that specifies the computation of a collection of values either in terms of
 * a UML Behavior or based on a textual statement in a language other than UML
 * 
 * Diagrams
 * 
 * Expressions, Dependencies
 * 
 * Generalizations
 * 
 * ValueSpecification
 * 
 * Attributes
 * 
 *  body : String [0..*]
 * 
 * A textual definition of the behavior of the OpaqueExpression, possibly in multiple languages.
 * 
 *  language : String [0..*]
 * 
 * Specifies the languages used to express the textual bodies of the OpaqueExpression. Languages are matched to
 * body Strings by order. The interpretation of the body depends on the languages. If the languages are
 * unspecified, they may be implicit from the expression body or the context.
 * 
 * Association Ends
 * 
 *  behavior : Behavior [0..1] (opposite A_behavior_opaqueExpression::opaqueExpression)
 * 
 * Specifies the behavior of the OpaqueExpression as a UML Behavior.
 * 
 *  /result : Parameter [0..1]{} (opposite A_result_opaqueExpression::opaqueExpression)
 * 
 * If an OpaqueExpression is specified using a UML Behavior, then this refers to the single required return
 * Parameter of that Behavior. When the Behavior completes execution, the values on this Parameter give the
 * result of evaluating the OpaqueExpression.
 * 
 * Operations
 * 
 *  isIntegral() : Boolean
 * 
 * The query isIntegral() tells whether an expression is intended to produce an Integer.
 * 
 * body: false
 * 
 *  isNonNegative() : Boolean
 * 
 * The query isNonNegative() tells whether an integer expression has a non-negative value.
 * 
 * pre: self.isIntegral()
 * 
 * body: false
 * 
 *  isPositive() : Boolean
 * 
 * The query isPositive() tells whether an integer expression has a positive value.
 * 
 * pre: self.isIntegral()
 * 
 * body: false
 * 
 *  result() : Parameter [0..1]
 * 
 * Derivation for OpaqueExpression::/result
 * 
 * body: if behavior = null then
 * null
 * else
 * behavior.ownedParameter->first()
 * endif
 * 
 *  value() : Integer
 * 
 * The query value() gives an integer value for an expression intended to produce one.
 * pre: self.isIntegral()
 * 
 * body: 0
 * 
 * Constraints
 * 
 *  language_body_size
 * 
 * If the language attribute is not empty, then the size of the body and language arrays must be the same.
 * 
 * inv: language->notEmpty() implies (_'body'->size() = language->size())
 * 
 *  one_return_result_parameter
 * 
 * The behavior must have exactly one return result parameter.
 * 
 * inv: behavior <> null implies
 * behavior.ownedParameter->select(direction=ParameterDirectionKind::return)->size() = 1
 * 
 * UMLR-696: The behavior of an OpaqueExpression should be allowed to have input parameters
 * 
 *  only_return_result_parametersonly_in_or_return_parameters
 * 
 * The behavior may only have return result parameters.The behavior may only have non-stream in or return
 * parameters.
 * 
 * inv: behavior <> null implies behavior.ownedParameter-
 * >select(direction<>ParameterDirectionKind::return)->isEmpty()forAll(not isStream and
 * (direction=ParameterDirectionKind::in or direction=ParameterDirectionKind::return))
**/