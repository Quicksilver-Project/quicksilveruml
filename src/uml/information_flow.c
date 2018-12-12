/**~information_flow~
 * InformationFlow [Class]
 * 
 * Description
 * 
 * InformationFlows describe circulation of information through a system in a general manner. They do not specify the
 * nature of the information, mechanisms by which it is conveyed, sequences of exchange or any control conditions.
 * During more detailed modeling, representation and realization links may be added to specify which model elements
 * implement an InformationFlow and to show how information is conveyed. InformationFlows require some kind of
 * “information channel” for unidirectional transmission of information items from sources to targets. They specify the
 * information channel’s realizations, if any, and identify the information that flows along them. Information moving
 * along the information channel may be represented by abstract InformationItems and by concrete Classifiers.
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Generalizations
 * 
 * DirectedRelationship, PackageableElement
 * 
 * Association Ends
 * 
 *  conveyed : Classifier [1..*] (opposite A_conveyed_conveyingFlow::conveyingFlow)
 * 
 * Specifies the information items that may circulate on this information flow.
 * 
 *  informationSource : NamedElement [1..*]{subsets DirectedRelationship::source} (opposite
 * A_informationSource_informationFlow::informationFlow)
 * 
 * Defines from which source the conveyed InformationItems are initiated.
 * 
 *  informationTarget : NamedElement [1..*]{subsets DirectedRelationship::target} (opposite
 * A_informationTarget_informationFlow::informationFlow)
 * 
 * Defines to which target the conveyed InformationItems are directed.
 * 
 *  realization : Relationship [0..*] (opposite A_realization_abstraction_flow::abstraction)
 * 
 * Determines which Relationship will realize the specified flow.
 * 
 *  realizingActivityEdge : ActivityEdge [0..*] (opposite
 * A_realizingActivityEdge_informationFlow::informationFlow)
 * 
 * Determines which ActivityEdges will realize the specified flow.
 * 
 *  realizingConnector : Connector [0..*] (opposite A_realizingConnector_informationFlow::informationFlow)
 * 
 * Determines which Connectors will realize the specified flow.
 * 
 *  realizingMessage : Message [0..*] (opposite A_realizingMessage_informationFlow::informationFlow)
 * 
 * Determines which Messages will realize the specified flow.
 * 
 * Constraints
 * 
 *  must_conform
 * 
 * The sources and targets of the information flow must conform to the sources and targets or conversely the
 * targets and sources of the realization relationships.
 * 
 * Cannot be expressed in OCL
 * 
 *  sources_and_targets_kind
 * 
 * The sources and targets of the information flow can only be one of the following kind: Actor, Node, UseCase,
 * Artifact, Class, Component, Port, Property, Interface, Package, ActivityNode, ActivityPartition, Behavior and
 * InstanceSpecification except when its classifier is a relationship (i.e. it represents a link).
 * 
 * inv: (self.informationSource->forAll( sis |
 * oclIsKindOf(Actor) or oclIsKindOf(Node) or oclIsKindOf(UseCase) or oclIsKindOf(Artifact)
 * or
 * oclIsKindOf(Class) or oclIsKindOf(Component) or oclIsKindOf(Port) or oclIsKindOf(Property)
 * or
 * oclIsKindOf(Interface) or oclIsKindOf(Package) or oclIsKindOf(ActivityNode) or
 * oclIsKindOf(ActivityPartition) or
 * (oclIsKindOf(InstanceSpecification) and not
 * sis.oclAsType(InstanceSpecification).classifier->exists(oclIsKindOf(Relationship)))))
 * and
 * (self.informationTarget->forAll( sit |
 * oclIsKindOf(Actor) or oclIsKindOf(Node) or oclIsKindOf(UseCase) or oclIsKindOf(Artifact)
 * or
 * oclIsKindOf(Class) or oclIsKindOf(Component) or oclIsKindOf(Port) or oclIsKindOf(Property)
 * or
 * oclIsKindOf(Interface) or oclIsKindOf(Package) or oclIsKindOf(ActivityNode) or
 * oclIsKindOf(ActivityPartition) or
 * (oclIsKindOf(InstanceSpecification) and not sit.oclAsType(InstanceSpecification).classifier-
 * >exists(oclIsKindOf(Relationship)))))
 * 
 *  convey_classifiers
 * 
 * An information flow can only convey classifiers that are allowed to represent an information item.
 * 
 * inv: self.conveyed->forAll(oclIsKindOf(Class) or oclIsKindOf(Interface)
 * or oclIsKindOf(InformationItem) or oclIsKindOf(Signal) or oclIsKindOf(Component))
**/