/**~deployment~
 * Deployment [Class]
 * 
 * Description
 * 
 * A deployment is the allocation of an artifact or artifact instance to a deployment target. A component deployment is the
 * deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a
 * deployment specification. Examples are executables and configuration files.
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Generalizations
 * 
 * Dependency
 * 
 * Association Ends
 * 
 *  ♦ configuration : DeploymentSpecification [0..*]{subsets Element::ownedElement} (opposite
 * DeploymentSpecification::deployment)
 * 
 * The specification of properties that parameterize the deployment and execution of one or more Artifacts.
 * 
 *  deployedArtifact : DeployedArtifact [0..*]{subsets Dependency::supplier} (opposite
 * A_deployedArtifact_deploymentForArtifact::deploymentForArtifact)
 * 
 * The Artifacts that are deployed onto a Node. This association specializes the supplier association.
 * 
 *  location : DeploymentTarget [1..1]{subsets Dependency::client, subsets Element::owner} (opposite
 * DeploymentTarget::deployment)
 * 
 * The DeployedTarget which is the target of a Deployment.
**/