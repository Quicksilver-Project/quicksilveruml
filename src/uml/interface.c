/**~simple classifier~
 * Interface [Class]
 * 
 * Description
 * 
 * Interfaces declare coherent services that are implemented by BehavioredClassifiers that implement the Interfaces via
 * InterfaceRealizations.
 * 
 * Diagrams
 * 
 * Interfaces, Encapsulated Classifiers, Components, Properties, Operations
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Association Ends
 * 
 *  ♦ nestedClassifier : Classifier [0..*]{ordered, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite A_nestedClassifier_interface::interface)
 * 
 * References all the Classifiers that are defined (nested) within the Interface.
 * 
 *  ♦ ownedAttribute : Property [0..*]{ordered, subsets Classifier::attribute, subsets Namespace::ownedMember}
 * (opposite Property::interface)
 * 
 * The attributes (i.e., the Properties) owned by the Interface.
 * 
 *  ♦ ownedOperation : Operation [0..*]{ordered, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite Operation::interface)
 * 
 * The Operations owned by the Interface.
 * 
 *  ♦ ownedReception : Reception [0..*]{subsets Classifier::feature, subsets Namespace::ownedMember}
 * (opposite A_ownedReception_interface::interface)
 * 
 * Receptions that objects providing this Interface are willing to accept.
 * 
 *  ♦ protocol : ProtocolStateMachine [0..1]{subsets Namespace::ownedMember} (opposite
 * A_protocol_interface::interface)
 * 
 * References a ProtocolStateMachine specifying the legal sequences of the invocation of the BehavioralFeatures
 * described in the Interface.
 * 
 *  redefinedInterface : Interface [0..*]{subsets Classifier::redefinedClassifier} (opposite
 * A_redefinedInterface_interface::interface)
 * 
 * References all the Interfaces redefined by this Interface.
 * 
 * Constraints
 * 
 *  visibility
 * 
 * The visibility of all Features owned by an Interface must be public.
 * inv: feature->forAll(visibility = VisibilityKind::public)
**/