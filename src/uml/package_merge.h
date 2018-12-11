/**~package~
 * A_mergedPackage_packageMerge [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Owned Ends
 * 
 *  packageMerge : PackageMerge [0..*]{subsets A_target_directedRelationship::directedRelationship} (opposite
 * PackageMerge::mergedPackage)
**/
/**
 * A_packageMerge_receivingPackage [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Member Ends
 * 
 *  Package::packageMerge
 * 
 *  PackageMerge::receivingPackage
**/