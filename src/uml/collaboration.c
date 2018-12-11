/**~structured classifier~
 * Collaboration [Class]
 * 
 * Description
 * 
 * A Collaboration describes a structure of collaborating elements (roles), each performing a specialized function, which
 * collectively accomplish some desired functionality.
 * 
 * Diagrams
 * 
 * Collaborations
 * 
 * Generalizations
 * 
 * StructuredClassifier, BehavioredClassifier
 * 
 * Association Ends
 * 
 *  collaborationRole : ConnectableElement [0..*]{subsets StructuredClassifier::role} (opposite
 * A_collaborationRole_collaboration::collaboration)
 * 
 * Represents the participants in the Collaboration.
**/