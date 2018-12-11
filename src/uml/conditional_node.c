/**~action~
 * ConditionalNode [Class]
 * 
 * Description
 * 
 * A ConditionalNode is a StructuredActivityNode that chooses one among some number of alternative collections of
 * ExecutableNodes to execute.
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Generalizations
 * 
 * StructuredActivityNode
 * 
 * Attributes
 * 
 *  isAssured : Boolean [1..1] = false
 * 
 * If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
 * 
 *  isDeterminate : Boolean [1..1] = false
 * 
 * If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
 * 
 * Association Ends
 * 
 *  ♦ clause : Clause [1..*]{subsets Element::ownedElement} (opposite
 * A_clause_conditionalNode::conditionalNode)
 * 
 * The set of Clauses composing the ConditionalNode.
 * 
 *  ♦ result : OutputPin [0..*]{ordered, redefines StructuredActivityNode::structuredNodeOutput} (opposite
 * A_result_conditionalNode::conditionalNode)
 * 
 * The OutputPins that onto which are moved values from the bodyOutputs of the Clause selected for execution.
 * 
 * Operations
 * 
 *  allActions() : Action [0..*] {redefines Action::allActions()}
 * 
 * Return only this ConditionalNode. This prevents Actions within the ConditionalNode from having their 
 * OutputPins used as bodyOutputs or decider Pins in containing LoopNodes or ConditionalNodes.
 * 
 * body: self->asSet()
 * 
 * Constraints
 * 
 *  result_no_incoming
 * 
 * The result OutputPins have no incoming edges.
 * 
 * inv: result.incoming->isEmpty()
 * 
 *  no_input_pins
 * 
 * A ConditionalNode has no InputPins.
 * 
 * inv: input->isEmpty()
 * 
 *  one_clause_with_executable_node
 * 
 * No ExecutableNode in the ConditionNode may appear in the test or body part of more than one clause of a
 * ConditionalNode.
 * 
 * inv: node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)->forAll(n |
 * self.clause->select(test->union(_'body')->includes(n))->size()=1)
 * 
 *  matching_output_pins
 * 
 * Each clause of a ConditionalNode must have the same number of bodyOutput pins as the ConditionalNode has
 * result OutputPins, and each clause bodyOutput Pin must be compatible with the corresponding result
 * OutputPin (by positional order) in type, multiplicity, ordering, and uniqueness.
 * 
 * inv: clause->forAll(
 * bodyOutput->size()=self.result->size() and
 * Sequence{1..self.result->size()}->forAll(i |
 * bodyOutput->at(i).type.conformsTo(result->at(i).type) and
 * bodyOutput->at(i).isOrdered = result->at(i).isOrdered and
 * bodyOutput->at(i).isUnique = result->at(i).isUnique and
 * bodyOutput->at(i).compatibleWith(result->at(i))))
 * 
 *  executable_nodes
 * 
 * The union of the ExecutableNodes in the test and body parts of all clauses must be the same as the subset of
 * nodes contained in the ConditionalNode (considered as a StructuredActivityNode) that are ExecutableNodes.
 * inv: clause.test->union(clause._'body') = node-
 * >select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)
 * 
 *  clause_no_predecessor
 * 
 * No two clauses within a ConditionalNode may be predecessorClauses of each other, either directly or
 * indirectly.
 * 
 * inv: clause->closure(predecessorClause)->intersection(clause)->isEmpty()
**/