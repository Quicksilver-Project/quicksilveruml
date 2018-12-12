#include "element.h"
/**~common structure~
 * A_clientDependency_client [Association]
 * 
 * Diagrams
 * 
 * Dependencies
 * 
 * Member Ends
 * 
 *  NamedElement::clientDependency
 *  Dependency::client
**/
/**
 * A_nameExpression_namedElement [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  namedElement : NamedElement [0..1]{subsets Element::owner} (opposite NamedElement::nameExpression)
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