/**~action~
 * StructuredActivityNode [Class]
 * 
 * Description
 * 
 * A StructuredActivityNode is an Action
 * that is also an ActivityGroup and whose behavior
 * is specified by the
 * ActivityNodes and ActivityEdges it so contains.
 * Unlike other kinds of ActivityGroup,
 * a StructuredActivityNode owns
 * the ActivityNodes and ActivityEdges it contains,
 * and so a node or edge can only be directly contained in one
 * StructuredActivityNode,
 * though StructuredActivityNodes may be nested.
 * 
 * Diagrams
 * 
 * Structured Actions,
 * Expansion Regions
 * 
 * Generalizations
 * 
 * Namespace,
 * ActivityGroup,
 * Action
 * 
 * Specializations
 * 
 * ConditionalNode,
 * ExpansionRegion,
 * LoopNode,
 * SequenceNode
 * 
 * Attributes
 * 
 *  mustIsolate : Boolean [1..1] = false
 * 
 * If true, then any object used by an Action
 * within the StructuredActivityNode cannot
 * be accessed by any Action
 * outside the node until the
 * StructuredActivityNode as a whole completes.
 * Any concurrent Actions that would
 * result in accessing such objects are
 * required to have their execution
 * deferred until the completion of the
 * StructuredActivityNode.
 * 
 * Association Ends
 * 
 *  activity : Activity [0..1]
 * {redefines ActivityGroup::inActivity,
 * redefines ActivityNode::activity}
 * (opposite
 * Activity::structuredNode)
 * 
 * The Activity immediately containing the
 * StructuredActivityNode,
 * if it is not contained in another
 * StructuredActivityNode.
 * 
 *  ♦ edge : ActivityEdge [0..*]
 * {subsets ActivityGroup::containedEdge,
 * subsets Element::ownedElement}
 * (opposite ActivityEdge::inStructuredNode)
 * 
 * The ActivityEdges immediately contained
 * in the StructuredActivityNode.
 * 
 *  ♦ node : ActivityNode [0..*]
 * {subsets Element::ownedElement,
 * subsets ActivityGroup::containedNode}
 * (opposite ActivityNode::inStructuredNode)
 * 
 * The ActivityNodes immediately
 * contained in the StructuredActivityNode.
 * 
 *  ♦ structuredNodeInput : InputPin [0..*]
 * {subsets Action::input}
 * (opposite
 * A_structuredNodeInput_structuredActivityNode
 * ::structuredActivityNode)
 * 
 * The InputPins owned by the
 * StructuredActivityNode.
 * 
 *  ♦ structuredNodeOutput : OutputPin [0..*]
 * {subsets Action::output}
 * (opposite
 * A_structuredNodeOutput_structuredActivityNode
 * ::structuredActivityNode)
 * 
 * The OutputPins owned by the StructuredActivityNode.
 * 
 *  ♦ variable : Variable [0..*]
 * {subsets Namespace::ownedMember}
 * (opposite Variable::scope)
 * 
 * The Variables defined in the
 * scope of the StructuredActivityNode.
 * 
 * Operations
 * 
 *  allActions() : Action [0..*]
 * {redefines Action::allActions()}
 * 
 * Returns this StructuredActivityNode
 * and all Actions contained in it.
 * 
 * body: node->select(oclIsKindOf(Action)).oclAsType(Action).allActions()->including(self)-
 * >asSet()
 * 
 *  allOwnedNodes() : ActivityNode [0..*]
 * {redefines Action::allOwnedNodes()}
 * 
 * Returns all the ActivityNodes contained directly
 * or indirectly within this StructuredActivityNode, in addition
 * to the Pins of the StructuredActivityNode.
 * 
 * body: self.Action::allOwnedNodes()->union(node)->union(node-
 * >select(oclIsKindOf(Action)).oclAsType(Action).allOwnedNodes())->asSet()
 * 
 *  sourceNodes() : ActivityNode [0..*]
 * 
 * Return those ActivityNodes contained immediately
 * within the StructuredActivityNode that may act as sources
 * of edges owned by the StructuredActivityNode.
 * 
 * body: node->union(input.oclAsType(ActivityNode)->asSet())->
 * union(node->select(oclIsKindOf(Action)).oclAsType(Action).output)->asSet()
 * 
 *  targetNodes() : ActivityNode [0..*]
 * 
 * Return those ActivityNodes contained immediately
 * within the StructuredActivityNode that may act as targets
 * of edges owned by the StructuredActivityNode.
 * 
 * body: node->union(output.oclAsType(ActivityNode)->asSet())->
 * union(node->select(oclIsKindOf(Action)).oclAsType(Action).input)->asSet()
 * 
 *  containingActivity() : Activity [0..1]
 * {redefines ActivityGroup::containingActivity(), redefines
 * ActivityNode::containingActivity()}
 * 
 * The Activity that directly or indirectly
 * contains this StructuredActivityNode
 * (considered as an Action).
 * 
 * body: self.Action::containingActivity()
 * 
 * Constraints
 * 
 *  output_pin_edges
 * 
 * The outgoing ActivityEdges of the OutputPins
 * of a StructuredActivityNode 
 * must have targets that are not
 * within the StructuredActivityNode.
 * 
 * inv: output.outgoing.target->excludesAll(allOwnedNodes()-input)
 * 
 *  edges
 * 
 * The edges of a StructuredActivityNode
 * are all the ActivityEdges with source and target ActivityNodes
 * contained directly or indirectly 
 * within the StructuredActivityNode 
 * and at least one of the source or target not
 * contained in any more deeply nested StructuredActivityNode.
 * 
 * inv: edge=self.sourceNodes().outgoing->intersection(self.allOwnedNodes().incoming)->
 * union(self.targetNodes().incoming->intersection(self.allOwnedNodes().outgoing))->asSet()
 * 
 *  input_pin_edges
 * 
 * The incoming ActivityEdges of an InputPin
 * of a StructuredActivityNode must have sources 
 * that are not within
 * the StructuredActivityNode.
 * 
 * inv: input.incoming.source->excludesAll(allOwnedNodes()-output)
**/