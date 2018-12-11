/**~deployment~
 * DeploymentSpecification [Class]
 * 
 * Description
 * 
 * A deployment specification specifies a set of properties that determine execution parameters of a component artifact that
 * is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or
 * implements deployment specification properties is a deployment descriptor.
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Generalizations
 * 
 * Artifact
 * 
 * Attributes
 * 
 *  deploymentLocation : String [0..1]
 * 
 * The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address.'
 * 
 *  executionLocation : String [0..1]
 * 
 * The location where a component Artifact executes. This may be a local or remote location.
 * 
 * Association Ends
 * 
 *  deployment : Deployment [0..1]{subsets Element::owner} (opposite Deployment::configuration)
 * 
 * The deployment with which the DeploymentSpecification is associated.
 * 
 * Constraints
 * 
 *  deployment_target
 * 
 * The DeploymentTarget of a DeploymentSpecification is a kind of ExecutionEnvironment.
 * 
 * inv: deployment->forAll (location.oclIsKindOf(ExecutionEnvironment))
 * 
 *  deployed_elements
 * 
 * The deployedElements of a DeploymentTarget that are involved in a Deployment that has an associated
 * Deployment-Specification is a kind of Component (i.e., the configured components).
 * 
 * inv: deployment->forAll (location.deployedElement->forAll (oclIsKindOf(Component)))
**/