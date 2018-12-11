/**~structured classifier~
 * A_ownedEnd_owningAssociation [Association]
 * 
 * Diagrams
 * 
 * Associations, Properties
 * 
 * Member Ends
 * 
 *  Association::ownedEnd
 * 
 *  Property::owningAssociation
**/
/**
 * A_navigableOwnedEnd_association [Association]
 * 
 * Diagrams
 * 
 * Associations
 * 
 * Owned Ends
 * 
 *  association : Association [0..1]{subsets Property::owningAssociation} (opposite
 * Association::navigableOwnedEnd)
**/
/**
 * A_memberEnd_association [Association]
 * 
 * Diagrams
 * 
 * Associations, Properties
 * 
 * Member Ends
 * 
 *  Association::memberEnd
 * 
 *  Property::association
**/
/**
 * A_association_clearAssociationAction [Association]
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Owned Ends
 * 
 *  clearAssociationAction : ClearAssociationAction [0..1] (opposite ClearAssociationAction::association)
**/