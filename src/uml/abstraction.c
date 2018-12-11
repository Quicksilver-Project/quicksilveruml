/**~common structure~
 * Abstraction [Class]
 * 
 * Description:
 * 
 * An Abstraction is a Relationship that relates two Elements or sets of Elements that represent the same concept at
 * different levels of abstraction or from different viewpoints.
 * 
 * Diagrams
 *      Dependencies, Artifacts
 * 
 * Generalizations
 *      Dependency
 * 
 * Specializations
 *      Realization, Manifestation
 * 
 * Association Ends
 * 
 * mapping : OpaqueExpression [0..1]{subsets Element::ownedElement} (opposite A_mapping_abstraction::abstraction)
 * 
 * An OpaqueExpression that states the abstraction relationship between the supplier(s) and the client(s). In some
 * cases, such as derivation, it is usually formal and unidirectional; in other cases, such as trace, it is usually
 * informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship
 * between the Elements is not specified.
**/