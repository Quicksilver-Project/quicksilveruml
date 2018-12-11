/**~common structure~
 * A_relatedElement_relationship [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  /relationship : Relationship [0..*]{union} (opposite Relationship::relatedElement)
**/
/** 
 * A_target_directedRelationship [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  /directedRelationship : DirectedRelationship [0..*]{union, subsets
 * A_relatedElement_relationship::relationship} (opposite DirectedRelationship::target)
**/