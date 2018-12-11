/**~action~
 * ClearAssociationAction [Class]
 * 
 * Description
 * 
 * A ClearAssociationAction is an Action that destroys all links of an Association in which a particular object participates.
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  association : Association [1..1] (opposite A_association_clearAssociationAction::clearAssociationAction)
 * 
 * The Association to be cleared.
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_clearAssociationAction::clearAssociationAction)
 * 
 * The InputPin that gives the object whose participation in the Association is to be cleared.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the object InputPin is 1..1.
 * 
 * inv: object.is(1,1)
 * 
 *  same_type
 * 
 * The type of the InputPin must conform to the type of at least one of the memberEnds of the association.
 * 
 * inv: association.memberEnd->exists(self.object.type.conformsTo(type))
**/