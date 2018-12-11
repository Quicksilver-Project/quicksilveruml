/**~simple classifier~
 * InterfaceRealization [Class]
 * 
 * Description
 * 
 * An InterfaceRealization is a specialized realization relationship between a BehavioredClassifier and an Interface. This
 * relationship signifies that the realizing BehavioredClassifier conforms to the contract specified by the Interface.
 * 
 * Diagrams
 * 
 * Interfaces
 * 
 * Generalizations
 * 
 * Realization
 * 
 * Association Ends
 * 
 *  contract : Interface [1..1]{subsets Dependency::supplier} (opposite
 * A_contract_interfaceRealization::interfaceRealization)
 * 
 * References the Interface specifying the conformance contract.
 * 
 *  implementingClassifier : BehavioredClassifier [1..1]{subsets Dependency::client, subsets Element::owner}
 * (opposite BehavioredClassifier::interfaceRealization)
 * 
 * References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that
 * realizes the Interface to which it refers.
**/