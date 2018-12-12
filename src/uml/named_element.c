/**~common structure~
 * NamedElement [Abstract Class]
 * 
 * Description
 * 
 * A NamedElement is an Element in a model that may have a name. The name may be given directly and/or via the use of
 * a StringExpression.
 * 
 * Diagrams
 * 
 * Namespaces, Types, Dependencies, Activity Groups, Time, Use Cases, Collaborations, Behavior State
 * Machines, Interactions, Messages, Lifelines, Occurrences, Fragments, Information Flows, Deployments,
 * Events, Classifiers
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * Namespace, PackageableElement, TypedElement, ActivityGroup, Trigger, Extend, Include, CollaborationUse,
 * Vertex, GeneralOrdering, InteractionFragment, Lifeline, Message, MessageEnd, DeployedArtifact,
 * DeploymentTarget, ParameterSet, RedefinableElement
 * 
 * Attributes
 * 
 * NAME String [0..1]
 * 
 * The name of the NamedElement.
 * 
 *  /qualifiedName : String [0..1]
 * 
 * A name that allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is
 * constructed from the names of the containing Namespaces starting at the root of the hierarchy and ending with
 * the name of the NamedElement itself.
 * 
 *  visibility : VisibilityKind [0..1]
 * 
 * Determines whether and how the NamedElement is visible outside its owning Namespace.
 * 
 * Association Ends
 * 
 *  /clientDependency : Dependency [0..*]{subsets A_source_directedRelationship::directedRelationship}
 * (opposite Dependency::client)
 * 
 * Indicates the Dependencies that reference this NamedElement as a client.
 * 
 *  ♦ nameExpression : StringExpression [0..1]{subsets Element::ownedElement} (opposite
 * A_nameExpression_namedElement::namedElement)
 * 
 * The StringExpression used to define the name of this NamedElement.
 * 
 *  /namespace : Namespace [0..1]{union, subsets A_member_memberNamespace::memberNamespace, subsets
 * Element::owner} (opposite Namespace::ownedMember)
 * 
 * Specifies the Namespace that owns the NamedElement.
 * 
 * Operations
 * 
 *  allNamespaces() : Namespace [0..*]{ordered}
 * 
 * The query allNamespaces() gives the sequence of Namespaces in which the NamedElement is nested, working
 * outwards.
 * 
 * body: if owner.oclIsKindOf(TemplateParameter) and
 * owner.oclAsType(TemplateParameter).signature.template.oclIsKindOf(Namespace) then
 * let enclosingNamespace : Namespace =
 * owner.oclAsType(TemplateParameter).signature.template.oclAsType(Namespace) in
 * enclosingNamespace.allNamespaces()->prepend(enclosingNamespace)
 * else
 * if namespace->isEmpty()
 * then OrderedSet{}
 * else
 * namespace.allNamespaces()->prepend(namespace)
 * endif
 * endif
 * 
 *  allOwningPackages() : Package [0..*]
 * 
 * The query allOwningPackages() returns the set of all the enclosing Namespaces of this NamedElement,
 * working outwards, that are Packages, up to but not including the first such Namespace that is not a Package.
 * 
 * body: if namespace.oclIsKindOf(Package)
 * then
 * let owningPackage : Package = namespace.oclAsType(Package) in
 * owningPackage->union(owningPackage.allOwningPackages())
 * else
 * null
 * endif
 * 
 *  isDistinguishableFrom(n : NamedElement, ns : Namespace) : Boolean
 * 
 * The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a
 * Namespace. By default, two named elements are distinguishable if (a) they have types neither of which is a
 * kind of the other or (b) they have different names.
 * 
 * body: (self.oclIsKindOf(n.oclType()) or n.oclIsKindOf(self.oclType())) implies
 * ns.getNamesOfMember(self)->intersection(ns.getNamesOfMember(n))->isEmpty()
 * 
 *  qualifiedName() : String
 * 
 * When a NamedElement has a name, and all of its containing Namespaces have a name, the qualifiedName is
 * constructed from the name of the NamedElement and the names of the containing Namespaces.
 * 
 * body: if self.name <> null and self.allNamespaces()->select( ns | ns.name=null )->isEmpty()
 * then
 * self.allNamespaces()->iterate( ns : Namespace; agg: String = self.name |
 * ns.name.concat(self.separator()).concat(agg))
 * else
 * null
 * endif
 * 
 *  separator() : String
 * 
 * The query separator() gives the string that is used to separate names when constructing a qualifiedName.
 * body: '::'
 * 
 *  clientDependency() : Dependency [0..*]
 * 
 * body: Dependency.allInstances()->select(d | d.client->includes(self))
 * 
 * Constraints
 * 
 *  visibility_needs_ownership
 * 
 * If a NamedElement is owned by something other than a Namespace, it does not have a visibility. One that is
 * not owned by anything (and hence must be a Package, as this is the only kind of NamedElement that overrides
 * mustBeOwned()) may have a visibility.
 * 
 * inv: (namespace = null and owner <> null) implies visibility = null
 * 
 *  has_qualified_name
 * 
 * When there is a name, and all of the containing Namespaces have a name, the qualifiedName is constructed
 * from the name of the NamedElement and the names of the containing Namespaces.
 * 
 * inv: (name <> null and allNamespaces()->select(ns | ns.name = null)->isEmpty()) implies
 * qualifiedName = allNamespaces()->iterate( ns : Namespace; agg: String = name |
 * ns.name.concat(self.separator()).concat(agg))
 * 
 *  has_no_qualified_name
 * 
 * If there is no name, or one of the containing Namespaces has no name, there is no qualifiedName.
 * 
 * inv: name=null or allNamespaces()->select( ns | ns.name=null )->notEmpty() implies
 * qualifiedName = null
**/