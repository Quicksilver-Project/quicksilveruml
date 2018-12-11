/**~deployment~
 * CommunicationPath [Class]
 * 
 * Description
 * 
 * A communication path is an association between two deployment targets, through which they are able to exchange
 * signals and messages.
 * 
 * Diagrams
 * 
 * Nodes
 * 
 * Generalizations
 * 
 * Association
 * 
 * Constraints
 * 
 *  association_ends
 * 
 * The association ends of a CommunicationPath are typed by DeploymentTargets.
 * 
 * inv: endType->forAll (oclIsKindOf(DeploymentTarget))
**/