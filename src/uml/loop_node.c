/**~action~
 * LoopNode [Class]
 * 
 * Description
 * 
 * A LoopNode is a StructuredActivityNode that represents an iterative loop with setup, test, and body sections.
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
 *  isTestedFirst : Boolean [1..1] = false
 * 
 * If true, the test is performed before the first execution of the bodyPart. If false, the bodyPart is executed once
 * before the test is performed.
 * 
 * Association Ends
 * 
 *  bodyOutput : OutputPin [0..*]{ordered} (opposite A_bodyOutput_loopNode::loopNode)
 * 
 * The OutputPins on Actions within the bodyPart, the values of which are moved to the loopVariable OutputPins
 * after the completion of each execution of the bodyPart, before the next iteration of the loop begins or before
 * the loop exits.
 * 
 *  bodyPart : ExecutableNode [0..*] (opposite A_bodyPart_loopNode::loopNode)
 * 
 * The set of ExecutableNodes that perform the repetitive computations of the loop. The bodyPart is executed as
 * long as the test section produces a true value.
 * 
 *  decider : OutputPin [1..1] (opposite A_decider_loopNode::loopNode)
 * 
 * An OutputPin on an Action in the test section whose Boolean value determines whether to continue executing
 * the loop bodyPart.
 * 
 *  ♦ loopVariable : OutputPin [0..*]{ordered, subsets Element::ownedElement} (opposite
 * A_loopVariable_loopNode::loopNode)
 * 
 * A list of OutputPins that hold the values of the loop variables during an execution of the loop. When the test
 * fails, the values are moved to the result OutputPins of the loop.
 * 
 *  ♦ loopVariableInput : InputPin [0..*]{ordered, redefines StructuredActivityNode::structuredNodeInput}
 * (opposite A_loopVariableInput_loopNode::loopNode)
 * 
 * A list of InputPins whose values are moved into the loopVariable Pins before the first iteration of the loop.
 * 
 *  ♦ result : OutputPin [0..*]{ordered, redefines StructuredActivityNode::structuredNodeOutput} (opposite
 * A_result_loopNode::loopNode)
 * 
 * A list of OutputPins that receive the loopVariable values after the last iteration of the loop and constitute the
 * output of the LoopNode.
 * 
 *  setupPart : ExecutableNode [0..*] (opposite A_setupPart_loopNode::loopNode)
 * 
 * The set of ExecutableNodes executed before the first iteration of the loop, in order to initialize values or
 * perform other setup computations.
 * 
 *  test : ExecutableNode [1..*] (opposite A_test_loopNode::loopNode)
 * 
 * The set of ExecutableNodes executed in order to provide the test result for the loop.
 * 
 * Operations
 * 
 *  allActions() : Action [0..*] {redefines Action::allActions()}
 * 
 * Return only this LoopNode. This prevents Actions within the LoopNode from having their OutputPins used as
 * bodyOutputs or decider Pins in containing LoopNodes or ConditionalNodes.
 * 
 * body: self->asSet()
 * 
 *  sourceNodes() : ActivityNode [0..*] {redefines StructuredActivityNode::sourceNodes()}
 * 
 * Return the loopVariable OutputPins in addition to other source nodes for the LoopNode as a
 * StructuredActivityNode.
 * 
 * body: self.StructuredActivityNode::sourceNodes()->union(loopVariable)
 * 
 * Constraints
 * 
 *  result_no_incoming
 * 
 * The result OutputPins have no incoming edges.
 * 
 * inv: result.incoming->isEmpty()
 * 
 *  input_edges
 * 
 * The loopVariableInputs must not have outgoing edges.
 * 
 * inv: loopVariableInput.outgoing->isEmpty()
 * 
 *  executable_nodes
 * 
 * The union of the ExecutableNodes in the setupPart, test and bodyPart of a LoopNode must be the same as the
 * subset of nodes contained in the LoopNode (considered as a StructuredActivityNode) that are
 * ExecutableNodes.
 * 
 * inv: setupPart->union(test)->union(bodyPart)=node-
 * >select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)->asSet()
 * 
 *  body_output_pins
 * 
 * The bodyOutput pins are OutputPins on Actions in the body of the LoopNode.
 * 
 * inv: bodyPart.oclAsType(Action).allActions().output->includesAll(bodyOutput)
 * 
 *  setup_test_and_body
 * 
 * The test and body parts of a ConditionalNode must be disjoint with each other.
 * 
 * inv: setupPart->intersection(test)->isEmpty() and
 * setupPart->intersection(bodyPart)->isEmpty() and
 * test->intersection(bodyPart)->isEmpty()
 * 
 *  matching_output_pins
 * 
 * A LoopNode must have the same number of bodyOutput Pins as loopVariables, and each bodyOutput Pin must
 * be compatible with the corresponding loopVariable (by positional order) in type, multiplicity, ordering and
 * uniqueness.
 * 
 * inv: bodyOutput->size()=loopVariable->size() and
 * Sequence{1..loopVariable->size()}->forAll(i |
 * bodyOutput->at(i).type.conformsTo(loopVariable->at(i).type) and
 * bodyOutput->at(i).isOrdered = loopVariable->at(i).isOrdered and
 * bodyOutput->at(i).isUnique = loopVariable->at(i).isUnique and
 * loopVariable->at(i).includesMultiplicity(bodyOutput->at(i)))
 * 
 *  matching_loop_variables
 * 
 * A LoopNode must have the same number of loopVariableInputs and loopVariables, and they must match in
 * type, uniqueness and multiplicity.
 * 
 * inv: loopVariableInput->size()=loopVariable->size() and
 * loopVariableInput.type=loopVariable.type and
 * loopVariableInput.isUnique=loopVariable.isUnique and
 * loopVariableInput.lower=loopVariable.lower and
 * loopVariableInput.upper=loopVariable.upper
 * 
 *  matching_result_pins
 * 
 * A LoopNode must have the same number of result OutputPins and loopVariables, and they must match in type,
 * uniqueness and multiplicity.
 * 
 * inv: result->size()=loopVariable->size() and
 * result.type=loopVariable.type and
 * result.isUnique=loopVariable.isUnique and
 * result.lower=loopVariable.lower and
 * result.upper=loopVariable.upper
 * 
 *  loop_variable_outgoing
 * 
 * All ActivityEdges outgoing from loopVariable OutputPins must have targets within the LoopNode.
 * 
 * inv: allOwnedNodes()->includesAll(loopVariable.outgoing.target)
**/