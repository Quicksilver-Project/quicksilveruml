/**~package~
 * A_ownedEnd_extension [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  extension : Extension [1..1]{subsets Property::owningAssociation} (opposite Extension::ownedEnd)
**/
/**
 * A_extension_metaclass [Association]
 * 
 * Diagrams
 * 
 * Classes, Profiles
 * 
 * Member Ends
 * 
 *  Class::extension
 * 
 *  Extension::metaclass
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