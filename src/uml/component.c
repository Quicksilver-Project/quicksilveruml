/**~structured classifier~
 * Component [Class]
 * 
 * Description
 * 
 * A Component represents a modular part of a system that encapsulates its contents and whose manifestation is
 * replaceable within its environment.
 * 
 * Diagrams
 * 
 * Components
 * 
 * Generalizations
 * 
 * Class
 * 
 * Attributes
 * 
 *  isIndirectlyInstantiated : Boolean [1..1] = true
 * 
 * If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the
 * Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its
 * realizing Classifiers or parts.
 * 
 * Association Ends
 * 
 *  ♦ packagedElement : PackageableElement [0..*]{subsets Namespace::ownedMember} (opposite
 * A_packagedElement_component::component)
 * 
 * The set of PackageableElements that a Component owns. In the namespace of a Component, all model
 * elements that are involved in or related to its definition may be owned or imported explicitly. These may
 * include e.g., Classes, Interfaces, Components, Packages, UseCases, Dependencies (e.g., mappings), and
 * Artifacts.
 * 
 *  /provided : Interface [0..*]{} (opposite A_provided_component::component)
 * 
 * The Interfaces that the Component exposes to its environment. These Interfaces may be Realized by the
 * Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 * 
 *  ♦ realization : ComponentRealization [0..*]{subsets Element::ownedElement, subsets
 * A_supplier_supplierDependency::supplierDependency} (opposite ComponentRealization::abstraction)
 * 
 * The set of Realizations owned by the Component. Realizations reference the Classifiers of which the
 * Component is an abstraction; i.e., that realize its behavior.
 * 
 *  /required : Interface [0..*]{} (opposite A_required_component::component)
 * 
 * The Interfaces that the Component requires from other Components in its environment in order to be able to
 * offer its full set of provided functionality. These Interfaces may be used by the Component or any of its
 * realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 * 
 * Operations
 * 
 *  provided() : Interface [0..*]
 * 
 * Derivation for Component::/provided
 * body: let ris : Set(Interface) = allRealizedInterfaces(),
 * realizingClassifiers : Set(Classifier) = self.realization.realizingClassifier-
 * >union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
 * allRealizingClassifiers : Set(Classifier) = realizingClassifiers-
 * >union(realizingClassifiers.allParents())->asSet(),
 * realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c;
 * rci : Set(Interface) = Set{} | rci->union(c.allRealizedInterfaces())),
 * ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))-
 * >asSet(),
 * providedByPorts : Set(Interface) = ports.provided->asSet()
 * in ris->union(realizingClassifierInterfaces) ->union(providedByPorts)->asSet()
 * 
 *  required() : Interface [0..*]
 * 
 * Derivation for Component::/required
 * body: let uis : Set(Interface) = allUsedInterfaces(),
 * realizingClassifiers : Set(Classifier) = self.realization.realizingClassifier-
 * >union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
 * allRealizingClassifiers : Set(Classifier) = realizingClassifiers-
 * >union(realizingClassifiers.allParents())->asSet(),
 * realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c;
 * rci : Set(Interface) = Set{} | rci->union(c.allUsedInterfaces())),
 * ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))-
 * >asSet(),
 * usedByPorts : Set(Interface) = ports.required->asSet()
 * in uis->union(realizingClassifierInterfaces)->union(usedByPorts)->asSet()
 * 
 * Constraints
 * 
 *  no_nested_classifiers
 * 
 * A Component cannot nest Classifiers.
 * inv: nestedClassifier->isEmpty()
 * 
 *  no_packaged_elements
 * 
 * A Component nested in a Class cannot have any packaged elements.
 * inv: nestingClass <> null implies packagedElement->isEmpty()
**/