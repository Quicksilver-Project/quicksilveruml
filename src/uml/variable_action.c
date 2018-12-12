/**~action~
 * VariableAction [Abstract Class]
 * 
 * Description
 * 
 * VariableAction is an abstract class
 * for Actions that operate on a
 * specified Variable.
 * 
 * Diagrams
 * 
 * Variable Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Specializations
 * 
 * WriteVariableAction,
 * ClearVariableAction,
 * ReadVariableAction
 * 
 * Association Ends
 * 
 *  variable : Variable [1..1]
 * (opposite A_variable_variableAction::variableAction)
 * 
 * The Variable to be read or written.
 * 
 * Constraints
 * 
 *  scope_of_variable
 * 
 * The VariableAction must be
 * in the scope of the variable.
 * 
 * inv: variable.isAccessibleBy(self)
**/