/**~action~
 * RemoveStructuralFeatureValueAction [Class]
 * 
 * Description
 * 
 * A RemoveStructuralFeatureValueAction
 * is a WriteStructuralFeatureAction
 * that removes values from a
 * StructuralFeature.
 * 
 * Diagrams
 * 
 * Structural Feature Actions
 * 
 * Generalizations
 * 
 * WriteStructuralFeatureAction
 * 
 * Attributes
 * 
 *  isRemoveDuplicates : Boolean [1..1] = false
 * 
 * Specifies whether to remove
 * duplicates of the value
 * in nonunique StructuralFeatures.
 * 
 * Association Ends
 * 
 *  ♦ removeAt : InputPin [0..1]
 * {subsets Action::input}
 * (opposite
 * A_removeAt_removeStructuralFeatureValueAction
 * ::removeStructuralFeatureValueAction)
 * 
 * An InputPin that provides the 
 * position of an existing value 
 * to remove in ordered, 
 * nonunique structural features.
 * The type of the removeAt InputPin 
 * is UnlimitedNatural, but the 
 * value cannot be zero or unlimited.
 * 
 * Constraints
 * 
 *  removeAt_and_value
 * 
 * RemoveStructuralFeatureValueActions 
 * removing a value from ordered, 
 * non-unique StructuralFeatures must
 * have a single removeAt InputPin 
 * and no value InputPin, if 
 * isRemoveDuplicates is false.
 * The removeAt InputPin must be 
 * of type Unlimited Natural 
 * with multiplicity 1..1. 
 * Otherwise, the Action has 
 * a value InputPin
 * and no removeAt InputPin.
 * 
 * inv: if structuralFeature.isOrdered and not structuralFeature.isUnique and not
 * isRemoveDuplicates then
 * value = null and
 * removeAt <> null and
 * removeAt.type = UnlimitedNatural and
 * removeAt.is(1,1)
 * else
 * removeAt = null and value <> null
 * endif
**/