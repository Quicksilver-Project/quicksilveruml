#include "named_element.h"
/**~common structure~
 * A_type_extensionEnd [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  extensionEnd : ExtensionEnd [0..*]
 * {subsets A_type_typedElement
 * ::typedElement} (opposite
 * ExtensionEnd::type)
**/
/**
 * A_type_typedElement [Association]
 * 
 * Diagrams
 * 
 * Types
 * 
 * Owned Ends
 * 
 *  typedElement : TypedElement [0..*]
 * (opposite TypedElement::type)
**/