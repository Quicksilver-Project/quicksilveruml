/**~action~
 * AddStructuralFeatureValueAction [Class]
 * 
 * Description
 * 
 * An AddStructuralFeatureValueAction is a WriteStructuralFeatureAction for adding values to a StructuralFeature.
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
 *  isReplaceAll : Boolean [1..1] = false
 * 
 * Specifies whether existing values of the StructuralFeature should be removed before adding the new value.
 * Association Ends
 * 
 *  ♦ insertAt : InputPin [0..1]{subsets Action::input} (opposite
 * A_insertAt_addStructuralFeatureValueAction::addStructuralFeatureValueAction)
 * 
 * The InputPin that gives the position at which to insert the value in an ordered StructuralFeature. The type of
 * the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for unordered
 * StructuralFeatures.
 * 
 * Constraints
 * 
 *  required_value
 * 
 * A value InputPin is required.
 * 
 * inv: value<>null
 * 
 *  insertAt_pin
 * 
 * AddStructuralFeatureActions adding a value to ordered StructuralFeatures must have a single InputPin for the
 * insertion point with type UnlimitedNatural and multiplicity of 1..1 if isReplaceAll=false, and must have no
 * Input Pin for the insertion point when the StructuralFeature is unordered.
 * 
 * inv: if not structuralFeature.isOrdered then insertAt = null
 * else
 * not isReplaceAll implies
 * insertAt<>null and
 * insertAt->forAll(type=UnlimitedNatural and is(1,1.oclAsType(UnlimitedNatural)))
 * endif
**/