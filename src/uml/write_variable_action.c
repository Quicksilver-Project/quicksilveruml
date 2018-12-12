/**~action~
 * WriteVariableAction [Abstract Class]
 * 
 * Description
 * 
 * WriteVariableAction is an abstract class
 * for VariableActions that
 * change Variable values.
 * 
 * Diagrams
 * 
 * Variable Actions
 * 
 * Generalizations
 * 
 * VariableAction
 * 
 * Specializations
 * 
 * AddVariableValueAction,
 * RemoveVariableValueAction
 * 
 * Association Ends
 * 
 *  ♦ value : InputPin
 * [0..1]{subsets Action::input}
 * (opposite A_value_writeVariableAction::writeVariableAction)
 * 
 * The InputPin that gives the value to be
 * added or removed from the Variable.
 * 
 * Constraints
 * 
 *  value_type
 * 
 * The type of the value InputPin must
 * conform to the type of the variable.
 * 
 * inv: value <> null implies value.type.conformsTo(variable.type)
 * 
 *  multiplicity
 * 
 * The multiplicity of the value
 * InputPin is 1..1.
 * 
 * inv: value<>null implies value.is(1,1)
**/