/**~activity~ 
 * A_variable_activityScope [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 * 
 *  Activity::variable
 *  Variable::activityScope
**/
/**
 * A_variable_scope [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::variable
 *  Variable::scope
**/
/**
 * A_variable_variableAction [Association]
 * 
 * Diagrams
 * 
 * Variable Actions
 * 
 * Owned Ends
 * 
 *  variableAction : VariableAction [0..*] (opposite VariableAction::variable)
**/