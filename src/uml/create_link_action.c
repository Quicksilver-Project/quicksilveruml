/**~action~
 * CreateLinkAction [Class]
 * 
 * Description
 * 
 * A CreateLinkAction is a WriteLinkAction for creating links.
 * 
 * Diagrams
 * 
 * Link Actions, Link Object Actions
 * 
 * Generalizations
 * 
 * WriteLinkAction
 * 
 * Specializations
 * 
 * CreateLinkObjectAction
 * 
 * Association Ends
 * 
 *  ♦ endData : LinkEndCreationData [2..*]{redefines LinkAction::endData} (opposite
 * A_endData_createLinkAction::createLinkAction)
 * 
 * The LinkEndData that specifies the values to be placed on the Association ends for the new link.
 * 
 * Constraints
 * 
 *  association_not_abstract
 * 
 * The Association cannot be an abstract Classifier.
 * 
 * inv: not self.association().isAbstract
**/