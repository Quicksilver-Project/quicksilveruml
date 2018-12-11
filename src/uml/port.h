/**~structured classifier~
 * A_port_trigger [Association]
 * 
 * Diagrams
 * 
 * Events
 * 
 * Owned Ends
 * 
 *  trigger : Trigger [0..*] (opposite Trigger::port)
**/
/**
 * A_required_port [Association]
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers
 * 
 * Owned Ends
 * 
 *  port : Port [0..*] (opposite Port::required)
**/
/**
 * A_redefinedPort_port [Association]
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers
 * 
 * Owned Ends
 * 
 *  port : Port [0..*]{subsets A_redefinedProperty_property::property} (opposite Port::redefinedPort)
**/
/**
 * A_provided_port [Association]
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers
 * 
 * Owned Ends
 * 
 *  port : Port [0..*] (opposite Port::provided)
**/
/**
 * A_protocol_port [Association]
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers
 * 
 * Owned Ends
 * 
 *  port : Port [0..*] (opposite Port::protocol)
**/