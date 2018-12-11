/**~package~
 * ProfileApplication [Class]
 * 
 * Description
 * 
 * A profile application is used to show which profiles have been applied to a package.
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Attributes
 * 
 *  isStrict : Boolean [1..1] = false
 * 
 * Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly
 * applied.
 * 
 * Association Ends
 * 
 *  appliedProfile : Profile [1..1]{subsets DirectedRelationship::target} (opposite
 * A_appliedProfile_profileApplication::profileApplication)
 * 
 * References the Profiles that are applied to a Package through this ProfileApplication.
 * 
 *  applyingPackage : Package [1..1]{subsets DirectedRelationship::source, subsets Element::owner} (opposite
 * Package::profileApplication)
 * 
 * The package that owns the profile application.
**/