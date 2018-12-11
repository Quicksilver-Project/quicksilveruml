/**~classification~
 * A_defaultValue_owningParameter [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  owningParameter : Parameter [0..1]{subsets Element::owner} (opposite Parameter::defaultValue)
**/
/**
 * A_defaultValue_owningProperty [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  owningProperty : Property [0..1]{subsets Element::owner} (opposite Property::defaultValue)
**/
/**
 * A_ownedParameter_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Member Ends
 * 
 *  Operation::ownedParameter
 * 
 *  Parameter::operation
**/
/**
 * A_parameterSet_parameter [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Member Ends
 * 
 *  Parameter::parameterSet
 * 
 *  ParameterSet::parameter
**/
/**
 * A_parameter_activityParameterNode [Association]
 * 
 * Diagrams
 * 
 * Object Nodes
 * 
 * Owned Ends
 * 
 *  activityParameterNode : ActivityParameterNode [0..*] (opposite ActivityParameterNode::parameter)
**/
/**
 * A_parameter_templateSignature [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Owned Ends
 * 
 *  templateSignature : TemplateSignature [0..*] (opposite TemplateSignature::parameter)
**/
/**
 * A_parameterSet_parameter [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Member Ends
 * 
 *  Parameter::parameterSet
 * 
 *  ParameterSet::parameter
**/
/**
 * A_ownedParameter_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Member Ends
 * 
 *  Operation::ownedParameter
 * 
 *  Parameter::operation
**/
/**
 * A_defaultValue_owningParameter [Association]
 * 
 * Diagrams
 * 
 * Features
 * 
 * Owned Ends
 * 
 *  owningParameter : Parameter [0..1]{subsets Element::owner} (opposite Parameter::defaultValue)
**/