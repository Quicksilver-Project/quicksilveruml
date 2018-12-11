/**~information_flow~
 * A_conveyed_conveyingFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  conveyingFlow : InformationFlow [0..*] (opposite InformationFlow::conveyed)
**/
/**
 * A_informationSource_informationFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  informationFlow : InformationFlow [0..*]{subsets A_source_directedRelationship::directedRelationship}
 * (opposite InformationFlow::informationSource)
**/
/**
 * A_informationTarget_informationFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  informationFlow : InformationFlow [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite InformationFlow::informationTarget)
**/
/**
 * A_realization_abstraction_flow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  abstraction : InformationFlow [0..*] (opposite InformationFlow::realization)
**/
/**
 * A_realizingActivityEdge_informationFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  informationFlow : InformationFlow [0..*] (opposite InformationFlow::realizingActivityEdge)
**/
/**
 * A_realizingConnector_informationFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  informationFlow : InformationFlow [0..*] (opposite InformationFlow::realizingConnector)
**/
/**
 * A_realizingMessage_informationFlow [Association]
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Owned Ends
 * 
 *  informationFlow : InformationFlow [0..*] (opposite InformationFlow::realizingMessage)
**/