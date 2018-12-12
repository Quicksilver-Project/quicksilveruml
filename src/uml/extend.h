#include "directed_relationship.h"
#include "named_element.h"

/**~use case~ 
 * A_extensionLocation_extension [Association]
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Owned Ends
 * 
 *  extension : Extend [0..*] (opposite Extend::extensionLocation)
**/
/**
 * A_extendedCase_extend [Association]
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Owned Ends
 * 
 *  extend : Extend [0..*]{subsets A_target_directedRelationship::directedRelationship} (opposite
 * Extend::extendedCase)
**/
/**
 * A_extend_extension [Association]
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Member Ends
 * 
 *  UseCase::extend
 *  Extend::extension
**/
/**
 * A_condition_extend [Association]
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Owned Ends
 * 
 *  extend : Extend [0..1]{subsets Element::owner} (opposite Extend::condition)
**/