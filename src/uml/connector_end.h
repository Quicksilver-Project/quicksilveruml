/**~structured classifier~
 * A_partWithPort_connectorEnd [Association]
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers
 * 
 * Owned Ends
 * 
 *  connectorEnd : ConnectorEnd [0..*] (opposite ConnectorEnd::partWithPort)
**/
/**
 * A_end_role [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Member Ends
 * 
 *  ConnectableElement::end
 * 
 *  ConnectorEnd::role
**/
/**
 * A_endType_association [Association]
 * 
 * Diagrams
 * 
 * Associations
 * 
 * Owned Ends
 * 
 *  association : Association [0..*]{subsets A_relatedElement_relationship::relationship} (opposite
 * Association::endType)
**/
/**
 * A_definingEnd_connectorEnd [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  connectorEnd : ConnectorEnd [0..*] (opposite ConnectorEnd::definingEnd)
**/