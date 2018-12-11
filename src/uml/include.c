/**~use case~
 * Include [Class]
 * 
 * Description
 * 
 * An Include relationship specifies that a UseCase contains the behavior defined in another UseCase.
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Generalizations
 * 
 * DirectedRelationship, NamedElement
 * 
 * Association Ends
 * 
 *  addition : UseCase [1..1]{subsets DirectedRelationship::target} (opposite A_addition_include::include)
 * 
 * The UseCase that is to be included.
 * 
 *  includingCase : UseCase [1..1]{subsets NamedElement::namespace, subsets DirectedRelationship::source}
 * (opposite UseCase::include)
 * 
 * The UseCase which includes the addition and owns the Include relationship.
**/