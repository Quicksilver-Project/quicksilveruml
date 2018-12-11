/**~common structure~
 * DirectedRelationship [Abstract Class]
 * 
 * Description
 * 
 * A DirectedRelationship represents a relationship between a collection of source model Elements and a collection of
 * target model Elements.
 * 
 * Diagrams
 * 
 * Root, Template Bindings, Namespaces, Dependencies, Use Cases, Packages, Profiles, Information Flows,
 * 
 * Classifiers
 * 
 * Generalizations
 * Relationship
 * 
 * Specializations
 * 
 * Dependency, ElementImport, PackageImport, TemplateBinding, Extend, Include, ProtocolConformance,
 * PackageMerge, ProfileApplication, InformationFlow, Generalization
 * 
 * Association Ends
 * 
 *  /source : Element [1..*]{union, subsets Relationship::relatedElement} (opposite
 * 
 * A_source_directedRelationship::directedRelationship)
 * Specifies the source Element(s) of the DirectedRelationship.
 * 
 *  /target : Element [1..*]{union, subsets Relationship::relatedElement} (opposite
 * 
 * A_target_directedRelationship::directedRelationship)
 * Specifies the target Element(s) of the DirectedRelationship.
**/