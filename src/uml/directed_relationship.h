/**~common structure~
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
 * A_appliedProfile_profileApplication [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  profileApplication : ProfileApplication [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite ProfileApplication::appliedProfile)
**/
/**
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
/**
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
 * A_signature_templateBinding [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Owned Ends
 * 
 *  templateBinding : TemplateBinding [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite TemplateBinding::signature)
**/
/**
 * A_source_directedRelationship [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  /directedRelationship : DirectedRelationship [0..*]{union, subsets
 * A_relatedElement_relationship::relationship} (opposite DirectedRelationship::source)
**/
/**
 * 
 * A_supplier_supplierDependency [Association]
 * 
 * Diagrams
 * 
 * Dependencies
 * 
 * Owned Ends
 * 
 *  supplierDependency : Dependency [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite Dependency::supplier)
 * 
 * Indicates the dependencies that reference the supplier.
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