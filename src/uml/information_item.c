/**~information_flow~
 * InformationItem [Class]
 * 
 * Description
 * 
 * InformationItems represent many kinds of information that can flow from sources to targets in very abstract ways. They
 * represent the kinds of information that may move within a system, but do not elaborate details of the transferred
 * information. Details of transferred information are the province of other Classifiers that may ultimately define
 * InformationItems. Consequently, InformationItems cannot be instantiated and do not themselves have features,
 * generalizations, or associations. An important use of InformationItems is to represent information during early design
 * stages, possibly before the detailed modeling decisions that will ultimately define them have been made. Another
 * purpose of InformationItems is to abstract portions of complex models in less precise, but perhaps more general and
 * communicable, ways.
 * 
 * Diagrams
 * 
 * Information Flows
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Association Ends
 * 
 *  represented : Classifier [0..*] (opposite A_represented_representation::representation)
 * 
 * Determines the classifiers that will specify the structure and nature of the information. An information item
 * represents all its represented classifiers.
 * 
 * Constraints
 * 
 *  sources_and_targets
 * 
 * The sources and targets of an information item (its related information flows) must designate subsets of the
 * sources and targets of the representation information item, if any. The Classifiers that can realize an
 * information item can only be of the following kind: Class, Interface, InformationItem, Signal, Component.
 * 
 * inv: (self.represented->select(oclIsKindOf(InformationItem))->forAll(p |
 * p.conveyingFlow.source->forAll(q | self.conveyingFlow.source->includes(q)) and
 * p.conveyingFlow.target->forAll(q | self.conveyingFlow.target->includes(q)))) and
 * (self.represented->forAll(oclIsKindOf(Class) or oclIsKindOf(Interface) or
 * oclIsKindOf(InformationItem) or oclIsKindOf(Signal) or oclIsKindOf(Component)))
 * 
 *  has_no
 * 
 * An informationItem has no feature, no generalization, and no associations.
 * 
 * inv: self.generalization->isEmpty() and self.feature->isEmpty()
 * 
 *  not_instantiable
 * 
 * It is not instantiable.
 * 
 * inv: isAbstract
**/

