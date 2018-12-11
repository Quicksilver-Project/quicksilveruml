/**~deployment~
 * Node [Class]
 * 
 * Description
 * 
 * A Node is computational resource upon which artifacts may be deployed for execution. Nodes can be interconnected
 * through communication paths to define network structures.
 * 
 * Diagrams
 * 
 * Deployments, Nodes
 * 
 * Generalizations
 * 
 * Class, DeploymentTarget
 * 
 * Specializations
 * 
 * Device, ExecutionEnvironment
 * 
 * Association Ends
 * 
 *  ♦ nestedNode : Node [0..*]{subsets Namespace::ownedMember} (opposite A_nestedNode_node::node)
 * 
 * The Nodes that are defined (nested) within the Node.
 * 
 * Constraints
 * 
 *  internal_structure
 * 
 * The internal structure of a Node (if defined) consists solely of parts of type Node.
 * 
 * inv: part->forAll(oclIsKindOf(Node))
**/
