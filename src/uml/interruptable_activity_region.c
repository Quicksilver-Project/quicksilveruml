/**~activity~ 
 * InterruptibleActivityRegion [Class]
 * 
 * Description
 * 
 * An InterruptibleActivityRegion is an ActivityGroup that supports the termination of tokens flowing in the portions of an
 * activity within it.
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Generalizations
 * 
 * ActivityGroup
 * 
 * Association Ends
 * 
 *  interruptingEdge : ActivityEdge [0..*] (opposite ActivityEdge::interrupts)
 * 
 * The ActivityEdges leaving the InterruptibleActivityRegion on which a traversing token will result in the
 * termination of other tokens flowing in the InterruptibleActivityRegion.
 * 
 *  node : ActivityNode [0..*]{subsets ActivityGroup::containedNode} (opposite
 * ActivityNode::inInterruptibleRegion)
 * 
 * ActivityNodes immediately contained in the InterruptibleActivityRegion.
 * 
 * Constraints
 * 
 *  interrupting_edges
 * 
 * The interruptingEdges of an InterruptibleActivityRegion must have their source in the region and their target
 * outside the region, but within the same Activity containing the region.
 * 
 * inv: interruptingEdge->forAll(edge |
 * node->includes(edge.source) and node->excludes(edge.target) and
 * edge.target.containingActivity() = inActivity)
**/