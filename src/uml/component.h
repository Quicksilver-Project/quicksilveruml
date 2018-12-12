#include "class.h"

/**~structured classifier~
 * A_required_component [Association]
 * 
 * Diagrams
 * 
 * Components
 * 
 * Owned Ends
 * 
 *  component : Component [0..*] (opposite Component::required)
**/
/**
 * A_realization_abstraction_component [Association]
 * 
 * Diagrams
 * 
 * Components
 * 
 * Member Ends
 * 
 *  Component::realization
 * 
 *  ComponentRealization::abstraction
**/
/**
 * A_provided_component [Association]
 * 
 * Diagrams
 * 
 * Components
 * 
 * Owned Ends
 * 
 *  component : Component [0..*] (opposite Component::provided)
**/
/**
 * A_packagedElement_component [Association]
 * 
 * Diagrams
 * 
 * Components
 * 
 * Owned Ends
 * 
 *  component : Component [0..1]{subsets NamedElement::namespace} (opposite Component::packagedElement)
**/
