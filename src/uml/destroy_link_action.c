/**~action~
 * DestroyLinkAction [Class]
 * 
 * Description
 * 
 * A DestroyLinkAction is a WriteLinkAction that destroys links (including link objects).
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Generalizations
 * 
 * WriteLinkAction
 * 
 * Association Ends
 * 
 *  ♦ endData : LinkEndDestructionData [2..*]{redefines LinkAction::endData} (opposite
 * A_endData_destroyLinkAction::destroyLinkAction)
 * 
 * The LinkEndData that the values of the Association ends for the links to be destroyed.
**/