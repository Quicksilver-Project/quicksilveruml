/**~common structure~
 * A_metaclassReference_profile [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  profile : Profile [0..1]{subsets ElementImport::importingNamespace} (opposite Profile::metaclassReference)
**/
/**
 * A_elementImport_importingNamespace [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Member Ends
 * 
 *  Namespace::elementImport
 * 
 *  ElementImport::importingNamespace
**/
/**
 * A_importedElement_import [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  import : ElementImport [0..*]{subsets A_target_directedRelationship::directedRelationship} (opposite
 * ElementImport::importedElement)
**/