/**~common structure~
 * Namespace [Abstract Class]
 * 
 * Description
 * 
 * A Namespace is an Element in a model that owns and/or imports a set of NamedElements that can be identified by
 * name.
 * 
 * Diagrams
 * 
 * Namespaces, Constraints, Behavior State Machines, Packages, Fragments, Classifiers, Features, Structured
 * Actions
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * Region, State, Transition, Package, InteractionOperand, BehavioralFeature, Classifier, StructuredActivityNode
 * 
 * Association Ends
 * 
 *  ♦ elementImport : ElementImport [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite ElementImport::importingNamespace)
 * 
 * References the ElementImports owned by the Namespace.
 * 
 *  /importedMember : PackageableElement [0..*]{subsets Namespace::member} (opposite
 * A_importedMember_namespace::namespace)
 * 
 * References the PackageableElements that are members of this Namespace as a result of either PackageImports
 * or ElementImports.
 * 
 *  /member : NamedElement [0..*]{union} (opposite A_member_memberNamespace::memberNamespace)
 * 
 * A collection of NamedElements identifiable within the Namespace, either by being owned or by being
 * introduced by importing or inheritance.
 * 
 *  ♦ /ownedMember : NamedElement [0..*]{union, subsets Namespace::member, subsets
 * Element::ownedElement} (opposite NamedElement::namespace)
 * 
 * A collection of NamedElements owned by the Namespace.
 * 
 *  ♦ ownedRule : Constraint [0..*]{subsets Namespace::ownedMember} (opposite Constraint::context)
 * 
 * Specifies a set of Constraints owned by this Namespace.
 * 
 *  ♦ packageImport : PackageImport [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite PackageImport::importingNamespace)
 * 
 * References the PackageImports owned by the Namespace.
 * 
 * Operations
 * 
 *  excludeCollisions(imps : PackageableElement [0..*]) : PackageableElement [0..*]
 * 
 * The query excludeCollisions() excludes from a set of PackageableElements any that would not be
 * distinguishable from each other in this Namespace.
 * 
 * body: imps->reject(imp1 | imps->exists(imp2 | not imp1.isDistinguishableFrom(imp2, self)))
 * 
 *  getNamesOfMember(element : NamedElement) : String [0..*]
 * 
 * The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace,
 * taking importing into account. In general a member can have multiple names in a Namespace if it is imported
 * more than once with different aliases.
 * 
 * body: if self.ownedMember ->includes(element)
 * then Set{element.name}
 * else let elementImports : Set(ElementImport) = self.elementImport->select(ei |
 * ei.importedElement = element) in
 * if elementImports->notEmpty()
 * then
 * elementImports->collect(el | el.getName())->asSet()
 * else
 * self.packageImport->select(pi |
 * pi.importedPackage.visibleMembers().oclAsType(NamedElement)->includes(element))-> collect(pi
 * | pi.importedPackage.getNamesOfMember(element))->asSet()
 * endif
 * endif
 * 
 *  importMembers(imps : PackageableElement [0..*]) : PackageableElement [0..*]
 * 
 * The query importMembers() defines which of a set of PackageableElements are actually imported into the
 * Namespace. This excludes hidden ones, i.e., those which have names that conflict with names of
 * ownedMembers, and it also excludes PackageableElements that would have the indistinguishable names when
 * imported.
 * 
 * body: self.excludeCollisions(imps)->select(imp | self.ownedMember->forAll(mem |
 * imp.isDistinguishableFrom(mem, self)))
 * 
 *  importedMember() : PackageableElement [0..*]
 * 
 * The importedMember property is derived as the PackageableElements that are members of this Namespace as
 * a result of either PackageImports or ElementImports.
 * 
 * body: self.importMembers(elementImport.importedElement->asSet()-
 * >union(packageImport.importedPackage->collect(p | p.visibleMembers()))->asSet())
 * 
 *  membersAreDistinguishable() : Boolean
 * The Boolean query membersAreDistinguishable() determines whether all of the Namespace's members are
 * distinguishable within it.
 * 
 * body: member->forAll( memb |
 * member->excluding(memb)->forAll(other |
 * memb.isDistinguishableFrom(other, self)))
 * 
 * Constraints
 * 
 *  members_distinguishable
 * 
 * All the members of a Namespace are distinguishable within it.
 * 
 * inv: membersAreDistinguishable()
 * 
 *  cannot_import_self
 * 
 * A Namespace cannot have a PackageImport to itself.
 * 
 * inv: packageImport.importedPackage.oclAsType(Namespace)->excludes(self)
 * 
 *  cannot_import_ownedMembers
 * 
 * A Namespace cannot have an ElementImport to one of its ownedMembers.
 * 
 * inv: elementImport.importedElement.oclAsType(Element)->excludesAll(ownedMember)
**/