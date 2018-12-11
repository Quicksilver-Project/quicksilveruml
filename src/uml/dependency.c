/**~common structure~
 * Dependency [Class]
 * 
 * Description
 * 
 * A Dependency is a Relationship that signifies that a single model Element or a set of model Elements requires other
 * model Elements for their specification or implementation. This means that the complete semantics of the client
 * Element(s) are either semantically or structurally dependent on the definition of the supplier Element(s).
 * 
 * Diagrams
 * 
 * Dependencies, Collaborations, Deployments
 * 
 * Generalizations
 * 
 * DirectedRelationship, PackageableElement
 * 
 * Specializations
 * 
 * Abstraction, Usage, Deployment
 * 
 * Association Ends
 * 
 *  client : NamedElement [1..*]{subsets DirectedRelationship::source} (opposite NamedElement::clientDependency)
 * The Element(s) dependent on the supplier Element(s). In some cases (such as a trace Abstraction) the
 * assignment of direction (that is, the designation of the client Element) is at the discretion of the modeler and is
 * a stipulation.
 * 
 *  supplier : NamedElement [1..*]{subsets DirectedRelationship::target} (opposite 
 * A_supplier_supplierDependency::supplierDependency)
 * 
 * The Element(s) on which the client Element(s) depend in some respect. The modeler may stipulate a sense of
 * Dependency direction suitable for their domain.
**/