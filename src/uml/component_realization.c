/**~structured classifier~
 * ComponentRealization [Class]
 * 
 * Description
 * 
 * Realization is specialized to (optionally) define the Classifiers that realize the contract offered by a Component in terms
 * of its provided and required Interfaces. The Component forms an abstraction from these various Classifiers.
 * 
 * Diagrams
 * 
 * Components
 * 
 * Generalizations
 * 
 * Realization
 * 
 * Association Ends
 * 
 *  abstraction : Component [0..1]{subsets Dependency::supplier, subsets Element::owner} (opposite
 * Component::realization)
 * 
 * The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
 * 
 *  realizingClassifier : Classifier [1..*]{subsets Dependency::client} (opposite
 * A_realizingClassifier_componentRealization::componentRealization)
 * 
 * The Classifiers that are involved in the implementation of the Component that owns this Realization.
**/