/**~action~
 * DestroyObjectAction [Class]
 * 
 * Description
 * 
 * A DestroyObjectAction is an Action that destroys objects.
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Attributes
 * 
 *  isDestroyLinks : Boolean [1..1] = false
 * 
 * Specifies whether links in which the object participates are destroyed along with the object.
 * 
 *  isDestroyOwnedObjects : Boolean [1..1] = false
 * 
 * Specifies whether objects owned by the object (via composition) are destroyed along with the object.
 * 
 * Association Ends
 * 
 *  ♦ target : InputPin [1..1]{subsets Action::input} (opposite
 * A_target_destroyObjectAction::destroyObjectAction)
 * 
 * The InputPin providing the object to be destroyed.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the target InputPin is 1..1.
 * 
 * inv: target.is(1,1)
 * 
 *  no_type
 * 
 * The target InputPin has no type.
 * 
 * inv: target.type= null
**/
