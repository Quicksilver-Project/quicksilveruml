/**~action~
 * LinkEndCreationData [Class]
 * 
 * Description
 * 
 * LinkEndCreationData is LinkEndData used to provide values for one end of a link to be created by a CreateLinkAction.
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
 *  isReplaceAll : Boolean [1..1] = false
 * 
 * Specifies whether the existing links emanating from the object on this end should be destroyed before creating
 * a new link.
 * 
 * Association Ends
 * 
 *  insertAt : InputPin [0..1] (opposite A_insertAt_linkEndCreationData::linkEndCreationData)
 * 
 * For ordered Association ends, the InputPin that provides the position where the new link should be inserted or
 * where an existing link should be moved to. The type of the insertAt InputPin is UnlimitedNatural, but the input
 * cannot be zero. It is omitted for Association ends that are not ordered.
 * 
 * Operations
 * 
 *  allPins() : InputPin [0..*]{nonunique} {redefines LinkEndData::allPins()}
 * 
 * Adds the insertAt InputPin (if any) to the set of all Pins.
 * 
 * body: self.LinkEndData::allPins()->including(insertAt)
 * 
 * Constraints
 * 
 *  insertAt_pin
 * 
 * LinkEndCreationData for ordered Association ends must have a single insertAt InputPin for the insertion point
 * with type UnlimitedNatural and multiplicity of 1..1, if isReplaceAll=false, and must have no InputPin for the
 * insertion point when the association ends are unordered.
 * 
 * inv: if not end.isOrdered
 * then insertAt = null
 * else
 * not isReplaceAll=false implies
 * insertAt <> null and insertAt->forAll(type=UnlimitedNatural and is(1,1))
 * endif
**/