/**~action~
 * ClearStructuralFeatureAction [Class]
 * 
 * Description
 * 
 * A ClearStructuralFeatureAction is a StructuralFeatureAction that removes all values of a StructuralFeature.
 * 
 * Diagrams
 * 
 * Structural Feature Actions
 * 
 * Generalizations
 * 
 * StructuralFeatureAction
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [0..1]{subsets Action::output} (opposite
 * A_result_clearStructuralFeatureAction::clearStructuralFeatureAction)
 * 
 * The OutputPin on which is put the input object as modified by the ClearStructuralFeatureAction.
 * 
 * Constraints
 * 
 *  type_of_result
 * 
 * The type of the result OutputPin is the same as the type of the inherited object InputPin.
 * 
 * inv: result<>null implies result.type = object.type
 * 
 *  multiplicity_of_result
 * 
 * The multiplicity of the result OutputPin must be 1..1.
 * 
 * inv: result<>null implies result.is(1,1)
**/