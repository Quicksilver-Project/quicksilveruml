/**~package~
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
 * A_metamodelReference_profile [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  profile : Profile [0..1]{subsets PackageImport::importingNamespace} (opposite Profile::metamodelReference)
**/
/**
 * A_profileApplication_applyingPackage [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Member Ends
 * 
 *  Package::profileApplication
 * 
 *  ProfileApplication::applyingPackage
**/