#include "packageable_element.h"
/**~common structure~
 * A_ownedType_package [Association]
 * 
 * Diagrams
 * 
 * Packages
 * 
 * Member Ends
 * 
 *  Package::ownedType
 *  Type::package
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
/**
 * A_type_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]
 * (opposite Operation::type)
**/