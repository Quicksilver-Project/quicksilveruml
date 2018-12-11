/**~action~
 * ReadStructuralFeatureAction [Class]
 * 
 * Description
 * 
 * A ReadStructuralFeatureAction is a StructuralFeatureAction that retrieves the values of a StructuralFeature.
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
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_readStructuralFeatureAction::readStructuralFeatureAction)
 * 
 * The OutputPin on which the result values are placed.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the StructuralFeature must be compatible with the multiplicity of the result OutputPin.
 * 
 * inv: structuralFeature.compatibleWith(result)
 * 
 *  type_and_ordering
 * 
 * The type and ordering of the result OutputPin are the same as the type and ordering of the StructuralFeature.
 * 
 * inv: result.type =structuralFeature.type and
 * result.isOrdered = structuralFeature.isOrdered
**/