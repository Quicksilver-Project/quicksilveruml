/**~package~
 * A_nestedPackage_nestingPackage [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Member Ends
 * 
 *  Package::nestedPackage
 * 
 *  Package::nestingPackage
**/
/**
 * A_ownedStereotype_owningPackage [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * A_packagedElement_owningPackage
 * 
 * Owned Ends
 * 
 *  owningPackage : Package [1..1]{redefines A_packagedElement_owningPackage::owningPackage} (opposite
 * Package::ownedStereotype)
**/
/**
 * A_ownedType_package [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Member Ends
 * 
 *  Package::ownedType
 * 
 *  Type::package
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
/**
 * A_packagedElement_owningPackage [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Specializations
 * 
 * A_ownedStereotype_owningPackage
 * 
 * Owned Ends
 * 
 *  owningPackage : Package [0..1]{subsets NamedElement::namespace} (opposite Package::packagedElement)
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