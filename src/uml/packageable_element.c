/**~common structure~
 * PackageableElement [Abstract Class]
 * 
 * Description
 * 
 * A PackageableElement is a NamedElement that may be owned directly by a Package. A PackageableElement is also
 * able to serve as the parameteredElement of a TemplateParameter.
 * 
 * Diagrams
 * 
 * Namespaces, Types, Constraints, Dependencies, Literals, Time, Components, Packages, Information Flows,
 * Deployments, Artifacts, Events, Instances, Generalization Sets
 * 
 * Generalizations
 * 
 * ParameterableElement, NamedElement
 * 
 * Specializations
 * 
 * Constraint, Dependency, Type, Event, Observation, ValueSpecification, Package, InformationFlow,
 * GeneralizationSet, InstanceSpecification
 * 
 * Attributes
 * 
 *  visibility : VisibilityKind [0..1] = public
 * 
 * A PackageableElement must have a visibility specified if it is owned by a Namespace. The default visibility is
 * public.
 * 
 * Constraints
 * 
 *  namespace_needs_visibility
 * 
 * A PackageableElement owned by a Namespace must have a visibility.
 * 
 * inv: visibility = null implies namespace = null
**/