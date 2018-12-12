#include "classifier.h"
/**~simple classifier~
 * A_redefinedInterface_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Owned Ends
 * 
 *  interface : Interface [0..*]{subsets A_redefinedClassifier_classifier::classifier} (opposite
 * Interface::redefinedInterface)
**/
/**
 * A_protocol_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Owned Ends
 * 
 *  interface : Interface [0..1]{subsets NamedElement::namespace} (opposite Interface::protocol)
 * 
 * Specifies the namespace in which the protocol state machine is defined.
**/
/**
 * A_ownedReception_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Owned Ends
 * 
 *  interface : Interface [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace} (opposite
 * Interface::ownedReception)
**/
/**
 * A_ownedOperation_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Operations
 * 
 * Member Ends
 * 
 *  Interface::ownedOperation
 *  Operation::interface
**/
/**
 * A_ownedAttribute_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Properties
 * 
 * Member Ends
 * 
 *  Interface::ownedAttribute
 *  Property::interface
**/
/**
 * A_nestedClassifier_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Owned Ends
 * 
 *  interface : Interface [0..1]{subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite Interface::nestedClassifier)
**/