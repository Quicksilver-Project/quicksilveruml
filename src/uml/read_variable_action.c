/**~action~
 * ReadVariableAction [Class]
 * 
 * Description
 * 
 * A ReadVariableAction is a VariableAction that retrieves the values of a Variable.
 * 
 * Diagrams
 * 
 * Variable Actions
 * 
 * Generalizations
 * 
 * VariableAction
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output}
 * (opposite A_result_readVariableAction::readVariableAction)
 * 
 * The OutputPin on which the result values are placed.
 * 
 * Constraints
 * 
 *  type_and_ordering
 * 
 * The type and ordering of the result OutputPin are the same as the type and ordering of the variable.
 * 
 * inv: result.type =variable.type and
 * result.isOrdered = variable.isOrdered
 * 
 *  compatible_multiplicity
 * 
 * The multiplicity of the variable must be compatible with the multiplicity of the output pin.
 * 
 * inv: variable.compatibleWith(result)
**/