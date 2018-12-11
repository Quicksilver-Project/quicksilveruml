/**~deployment~
 * DeploymentTarget [Abstract Class]
 * 
 * Description
 * 
 * A deployment target is the location for a deployed artifact.
 * 
 * Diagrams
 * 
 * Deployments, Nodes, Properties, Instances
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * Node, InstanceSpecification, Property
 * 
 * Association Ends
 * 
 *  /deployedElement : PackageableElement [0..*]{} (opposite
 * A_deployedElement_deploymentTarget::deploymentTarget)
 * 
 * The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 * 
 *  ♦ deployment : Deployment [0..*]{subsets Element::ownedElement, subsets
 * NamedElement::clientDependency} (opposite Deployment::location)
 * 
 * The set of Deployments for a DeploymentTarget.
 * 
 * Operations
 * 
 *  deployedElement() : PackageableElement [0..*]
 * 
 * Derivation for DeploymentTarget::/deployedElement
 * 
 * body: deployment.deployedArtifact->select(oclIsKindOf(Artifact))-
 * >collect(oclAsType(Artifact).manifestation)->collect(utilizedElement)->asSet()
**/