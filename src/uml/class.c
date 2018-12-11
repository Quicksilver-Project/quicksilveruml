/**~structured classifier~
 * Class [Class]
 * 
 * Description
 * 
 * A Class classifies a set of objects and specifies the features that characterize the structure and behavior of those objects.
 * A Class may have an internal structure and Ports.
 * 
 * Diagrams
 * 
 * Classes, Associations, Components, Profiles, Nodes, Behaviors, Properties, Operations
 * 
 * Generalizations
 * 
 * BehavioredClassifier, EncapsulatedClassifier
 * 
 * Specializations
 * 
 * AssociationClass, Component, Behavior, Stereotype, Node
 * 
 * Attributes
 * 
 *  isAbstract : Boolean [1..1] = false
 * 
 * If true, the Class does not provide a complete declaration and cannot be instantiated. An abstract Class is
 * typically used as a target of Associations or Generalizations.
 * 
 *  isActive : Boolean [1..1] = false
 * 
 * Determines whether an object specified by this Class is active or not. If true, then the owning Class is referred
 * to as an active Class. If false, then such a Class is referred to as a passive Class.
 * 
 * Association Ends
 * 
 *  /extension : Extension [0..*]{} (opposite Extension::metaclass)
 * 
 * This property is used when the Class is acting as a metaclass. It references the Extensions that specify
 * additional properties of the metaclass. The property is derived from the Extensions whose memberEnds are
 * typed by the Class.
 * 
 *  ♦ nestedClassifier : Classifier [0..*]{ordered, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite A_nestedClassifier_nestingClass::nestingClass)
 * 
 * The Classifiers owned by the Class that are not ownedBehaviors.
 * 
 *  ♦ ownedAttribute : Property [0..*]{ordered, subsets Classifier::attribute, subsets Namespace::ownedMember,
 * redefines StructuredClassifier::ownedAttribute} (opposite Property::class)
 * 
 * The attributes (i.e., the Properties) owned by the Class.
 * 
 *  ♦ ownedOperation : Operation [0..*]{ordered, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite Operation::class)
 * 
 * The Operations owned by the Class.
 * 
 *  ♦ ownedReception : Reception [0..*]{subsets Classifier::feature, subsets Namespace::ownedMember}
 * (opposite A_ownedReception_class::class)
 * 
 * The Receptions owned by the Class.
 * 
 *  /superClass : Class [0..*]{redefines Classifier::general} (opposite A_superClass_class::class)
 * 
 * The superclasses of a Class, derived from its Generalizations.
 * 
 * Operations
 * 
 *  extension() : Extension [0..*]
 * 
 * Derivation for Class::/extension : Extension
 * body: Extension.allInstances()->select(ext |
 * let endTypes : Sequence(Classifier) = ext.memberEnd->collect(type.oclAsType(Classifier))
 * in
 * endTypes->includes(self) or endTypes.allParents()->includes(self) )
 * 
 *  superClass() : Class [0..*]
 * 
 * Derivation for Class::/superClass : Class
 * body: self.general()->select(oclIsKindOf(Class))->collect(oclAsType(Class))->asSet()
 * 
 * Constraints
 * 
 *  passive_class
 * 
 * Only an active Class may own Receptions and have a classifierBehavior.
 * inv: not isActive implies (ownedReception->isEmpty() and classifierBehavior = null)
**/