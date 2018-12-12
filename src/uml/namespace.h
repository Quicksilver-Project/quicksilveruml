#include "named_element.h"
/**~common structure~
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
 * A_ownedParameterSet_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..1]{subsets NamedElement::namespace} (opposite Behavior::ownedParameterSet)
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
 *  ElementImport::importingNamespace
**/
/**
 * A_importedMember_namespace [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  namespace : Namespace [0..*]{subsets A_member_memberNamespace::memberNamespace} (opposite
 * Namespace::importedMember)
**/
/**
 * A_member_memberNamespace [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  /memberNamespace : Namespace [0..*]{union} (opposite Namespace::member)
**/
/**
 * 
 * A_ownedMember_namespace [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Member Ends
 * 
 *  Namespace::ownedMember
 *  NamedElement::namespace
**/
/**
 * A_ownedRule_context [Association]
 * 
 * Diagrams
 * 
 * Namespaces, Constraints
 * 
 * Member Ends
 * 
 *  Namespace::ownedRule
 *  Constraint::context
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
 *  PackageImport::importingNamespace
**/