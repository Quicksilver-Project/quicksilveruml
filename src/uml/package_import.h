/**~common structure~
 * A_importedPackage_packageImport [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  packageImport : PackageImport [0..*]{subsets A_target_directedRelationship::directedRelationship} (opposite
 * PackageImport::importedPackage)
**/
/**
 * A_packageImport_importingNamespace [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Member Ends
 * 
 *  Namespace::packageImport
 * 
 *  PackageImport::importingNamespace
**/