/**~classification~
 * Slot [Class]
 * 
 * Description
 * 
 * A Slot designates that an entity
 * modeled by an InstanceSpecification
 * has a value or values for a specific
 * StructuralFeature.
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Generalizations
 * 
 * Element
 * 
 * Association Ends
 * 
 *  definingFeature : StructuralFeature [1..1]
 * (opposite A_definingFeature_slot::slot)
 * 
 * The StructuralFeature that specifies
 * the values that may be held by the Slot.
 * 
 *  owningInstance : InstanceSpecification [1..1]
 * {subsets Element::owner}
 * (opposite InstanceSpecification::slot)
 * 
 * The InstanceSpecification that owns this Slot.
 * 
 *  ♦ value : ValueSpecification [0..*]
 * {ordered, subsets Element::ownedElement}
 * (opposite
 * A_value_owningSlot::owningSlot)
 * 
 * The value or values held by the Slot.
**/