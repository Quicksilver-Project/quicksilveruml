/**~structured classifier~
 * A_type_collaborationUse [Association]
 * 
 * Diagrams
 * 
 * Collaborations
 * 
 * Owned Ends
 * 
 *  collaborationUse : CollaborationUse [0..*] (opposite CollaborationUse::type)
**/
/**
 * A_roleBinding_collaborationUse [Association]
 * 
 * Diagrams
 * 
 * Collaborations
 * 
 * Owned Ends
 * 
 *  collaborationUse : CollaborationUse [0..1]{subsets Element::owner} (opposite CollaborationUse::roleBinding)
**/
/**
 * A_collaborationUse_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Collaborations
 * 
 * Specializations
 * 
 * A_representation_classifier
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{subsets Element::owner} (opposite Classifier::collaborationUse)
**/