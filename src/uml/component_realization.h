#include "realization.h"

/**~structured classifier~
 * A_realizingClassifier_componentRealization [Association]
 * 
 * Diagrams
 * 
 * Components
 * 
 * Owned Ends
 * 
 *  componentRealization : ComponentRealization [0..*]{subsets NamedElement::clientDependency} (opposite
 * ComponentRealization::realizingClassifier)
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