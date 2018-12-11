/**~structured classifier~
 * A_type_connector [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  connector : Connector [0..*] (opposite Connector::type)
**/
/**
 * A_redefinedConnector_connector [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  connector : Connector [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Connector::redefinedConnector)
**/
/**
 * A_end_connector [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  connector : Connector [1..1]{subsets Element::owner} (opposite Connector::end)
**/
/**
 * A_contract_connector [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  connector : Connector [0..*] (opposite Connector::contract)
**/