/**~action~
 * LinkEndDestructionData [Class]
 * 
 * Description
 * 
 * LinkEndDestructionData is LinkEndData used to provide values for one end of a link to be destroyed by a
 * DestroyLinkAction.
 * 
 * Diagrams
 * 
 * Link End Data, Link Actions
 * 
 * Generalizations
 * 
 * LinkEndData
 * 
 * Attributes
 * 
 *  isDestroyDuplicates : Boolean [1..1] = false
 * 
 * Specifies whether to destroy duplicates of the value in nonunique Association ends.
 * 
 * Association Ends
 * 
 *  destroyAt : InputPin [0..1] (opposite A_destroyAt_linkEndDestructionData::linkEndDestructionData)
 * 
 * The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique
 * Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or
 * unlimited.
 * 
 * Operations
 * 
 *  allPins() : InputPin [0..*]{nonunique} {redefines LinkEndData::allPins()}
 * 
 * Adds the destroyAt InputPin (if any) to the set of all Pins.
 * 
 * body: self.LinkEndData::allPins()->including(destroyAt)
 * 
 * Constraints
 * 
 *  destroyAt_pin
 * 
 * LinkEndDestructionData for ordered, nonunique Association ends must have a single destroyAt InputPin if
 * isDestroyDuplicates is false, which must be of type UnlimitedNatural and have a multiplicity of 1..1.
 * Otherwise, the action has no destroyAt input pin.
 * 
 * inv: if not end.isOrdered or end.isUnique or isDestroyDuplicates
 * then destroyAt = null
 * else
 * destroyAt <> null and
 * destroyAt->forAll(type=UnlimitedNatural and is(1,1))
 * endif
**/
