/**~classification~
 * A_bodyCondition_bodyContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  bodyContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::bodyCondition)
**/
/**
 * A_operation_templateParameter_parameteredElement [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Member Ends
 * 
 *  Operation::templateParameter
 * 
 *  OperationTemplateParameter::parameteredElement
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
 * A_postcondition_postContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  postContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::postcondition)
**/
/**
 * A_precondition_preContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  preContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::precondition)
**/
/**
 * A_raisedException_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_raisedException_behavioralFeature::behavioralFeature} (opposite
 * Operation::raisedException)
**/
/**
 * A_redefinedOperation_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Operation::redefinedOperation)
**/
/**
 * A_type_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*] (opposite Operation::type)
**/
/**
 * A_operation_callEvent [Association]
 * 
 * Diagrams
 * 
 * Events
 * 
 * Owned Ends
 * 
 *  callEvent : CallEvent [0..*] (opposite CallEvent::operation)
**/
/**
 * A_ownedOperation_class [Association]
 * 
 * Diagrams
 * 
 * Classes, Operations
 * 
 * Member Ends
 * 
 *  Class::ownedOperation
 * 
 *  Operation::class
**/
/**
 * A_ownedOperation_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Operations
 * 
 * Member Ends
 * 
 *  Interface::ownedOperation
 * 
 *  Operation::interface
**/
/**
 * A_ownedOperation_datatype [Association]
 * 
 * Diagrams
 * 
 * DataTypes, Operations
 * 
 * Member Ends
 * 
 *  DataType::ownedOperation
 * 
 *  Operation::datatype
**/
/**
 * A_type_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*] (opposite Operation::type)
**/
/**
 * A_redefinedOperation_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Operation::redefinedOperation)
**/
/**
 * A_raisedException_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_raisedException_behavioralFeature::behavioralFeature} (opposite
 * Operation::raisedException)
**/
/**
 * A_precondition_preContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  preContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::precondition)
**/
/**
 * A_postcondition_postContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  postContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::postcondition)
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
 * A_operation_templateParameter_parameteredElement [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Member Ends
 * 
 *  Operation::templateParameter
 * 
 *  OperationTemplateParameter::parameteredElement
**/
/**
 * A_bodyCondition_bodyContext [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  bodyContext : Operation [0..1]{subsets Constraint::context} (opposite Operation::bodyCondition)
**/