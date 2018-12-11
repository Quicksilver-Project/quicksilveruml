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
 * 
 *  Dependency::client
**/
/**
 * 
 * A_supplier_supplierDependency [Association]
 * 
 * Diagrams
 * 
 * Dependencies
 * 
 * Owned Ends
 * 
 *  supplierDependency : Dependency [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite Dependency::supplier)
 * 
 * Indicates the dependencies that reference the supplier.
**/