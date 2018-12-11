/**~action~
 * Clause [Class]
 * 
 * Description
 * 
 * A Clause is an Element that represents a single branch of a ConditionalNode, including a test and a body section. The
 * body section is executed only if (but not necessarily if) the test section evaluates to true.
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Generalizations
 * 
 * Element
 * 
 * Association Ends
 * 
 *  body : ExecutableNode [0..*] (opposite A_body_clause::clause)
 * 
 * The set of ExecutableNodes that are executed if the test evaluates to true and the Clause is chosen over other
 * Clauses within the ConditionalNode that also have tests that evaluate to true.
 * 
 *  bodyOutput : OutputPin [0..*]{ordered} (opposite A_bodyOutput_clause::clause)
 * 
 * The OutputPins on Actions within the body section whose values are moved to the result OutputPins of the
 * containing ConditionalNode after execution of the body.
 * 
 *  decider : OutputPin [1..1] (opposite A_decider_clause::clause)
 * 
 * An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
 * 
 *  predecessorClause : Clause [0..*] (opposite Clause::successorClause)
 * 
 * A set of Clauses whose tests must all evaluate to false before this Clause can evaluate its test.
 * 
 *  successorClause : Clause [0..*] (opposite Clause::predecessorClause)
 * 
 * A set of Clauses that may not evaluate their tests unless the test for this Clause evaluates to false.
 * 
 *  test : ExecutableNode [1..*] (opposite A_test_clause::clause)
 * 
 * The set of ExecutableNodes that are executed in order to provide a test result for the Clause.
 * 
 * Constraints
 * 
 *  body_output_pins
 * 
 * The bodyOutput Pins are OutputPins on Actions in the body of the Clause.
 * 
 * inv: _'body'.oclAsType(Action).allActions().output->includesAll(bodyOutput)
 * 
 *  decider_output
 * 
 * The decider Pin must be on an Action in the test section of the Clause and must be of type Boolean with
 * multiplicity 1..1.
 * 
 * inv: test.oclAsType(Action).allActions().output->includes(decider) and
 * decider.type = Boolean and
 * decider.is(1,1)
 * 
 *  test_and_body
 * 
 * The test and body parts of a ConditionalNode must be disjoint with each other.
 * 
 * inv: test->intersection(_'body')->isEmpty()
**/