/**~action~
 * A_bodyOutput_clause [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  clause : Clause [0..*] (opposite Clause::bodyOutput)
**/
/**
 * A_body_clause [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  clause : Clause [0..1] (opposite Clause::body)
**/
/**
 * A_clause_conditionalNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  conditionalNode : ConditionalNode [1..1]{subsets Element::owner} (opposite ConditionalNode::clause)
**/
/**
 * 
 * A_decider_clause [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  clause : Clause [0..1] (opposite Clause::decider)
**/
/**
 * A_predecessorClause_successorClause [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  Clause::predecessorClause
 *  Clause::successorClause
**/
/**
 * A_test_clause [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  clause : Clause [0..1] (opposite Clause::test)
**/
