/**~package~
 * PackageMerge [Class]
 * 
 * Description
 * 
 * A package merge defines how the contents of one package are extended by the contents of another package.
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Association Ends
 * 
 *  mergedPackage : Package [1..1]{subsets DirectedRelationship::target} (opposite
 * A_mergedPackage_packageMerge::packageMerge)
 * 
 * References the Package that is to be merged with the receiving package of the PackageMerge.
 * 
 *  receivingPackage : Package [1..1]{subsets DirectedRelationship::source, subsets Element::owner} (opposite
 * Package::packageMerge)
 * 
 * References the Package that is being extended with the contents of the merged package of the PackageMerge.
**/