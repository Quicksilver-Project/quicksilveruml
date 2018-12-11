/**~action~
 * WriteStructuralFeatureAction [Abstract Class]
 * 
 * Description
 * 
 * WriteStructuralFeatureAction is an abstract class for StructuralFeatureActions that change StructuralFeature values.
 * 
 * Diagrams
 * 
 * Structural Feature Actions
 * 
 * Generalizations
 * 
 * StructuralFeatureAction
 * 
 * Specializations
 * 
 * AddStructuralFeatureValueAction, RemoveStructuralFeatureValueAction
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [0..1]{subsets Action::output} (opposite
 * A_result_writeStructuralFeatureAction::writeStructuralFeatureAction)
 * 
 * The OutputPin on which is put the input object as modified by the WriteStructuralFeatureAction.
 * 
 *  ♦ value : InputPin [0..1]{subsets Action::input} (opposite
 * A_value_writeStructuralFeatureAction::writeStructuralFeatureAction)
 * 
 * The InputPin that provides the value to be added or removed from the StructuralFeature.
 * 
 * Constraints
 * 
 *  multiplicity_of_result
 * 
 * The multiplicity of the result OutputPin must be 1..1.
 * 
 * inv: result <> null implies result.is(1,1)
 * 
 *  type_of_value
 * 
 * The type of the value InputPin must conform to the type of the structuralFeature.
 * 
 * inv: value <> null implies value.type.conformsTo(structuralFeature.type)
 * 
 *  multiplicity_of_value
 * 
 * The multiplicity of the value InputPin is 1..1.
 * 
 * inv: value<>null implies value.is(1,1)
 * 
 *  type_of_result
 * 
 * The type of the result OutputPin is the same as the type of the inherited object InputPin.
 * 
 * inv: result <> null implies result.type = object.type
**/