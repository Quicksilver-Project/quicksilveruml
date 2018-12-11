/**~action~
 * ValueSpecificationAction [Class]
 * 
 * Description
 * 
 * A ValueSpecificationAction is an Action that evaluates a ValueSpecification and provides a result.
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_valueSpecificationAction::valueSpecificationAction)
 * 
 * The OutputPin on which the result value is placed.
 * 
 *  ♦ value : ValueSpecification [1..1]{subsets Element::ownedElement} (opposite
 * A_value_valueSpecificationAction::valueSpecificationAction)
 * 
 * The ValueSpecification to be evaluated.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the result OutputPin is 1..1
 * 
 * inv: result.is(1,1)
 * 
 *  compatible_type
 * 
 * The type of the value ValueSpecification must conform to the type of the result OutputPin.
 * 
 * inv: value.type.conformsTo(result.type)
**/