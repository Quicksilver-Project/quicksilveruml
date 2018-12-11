/**~classification~
 * Substitution [Class]
 * 
 * Description
 * 
 * A substitution is a relationship between two classifiers signifying that the substituting classifier complies with the
 * contract specified by the contract classifier. This implies that instances of the substituting classifier are runtime
 * substitutable where instances of the contract classifier are expected.
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Generalizations
 * 
 * Realization
 * 
 * Association Ends
 * 
 *  contract : Classifier [1..1]{subsets Dependency::supplier} (opposite A_contract_substitution::substitution)
 * 
 * The contract with which the substituting classifier complies.
 * 
 *  substitutingClassifier : Classifier [1..1]{subsets Dependency::client, subsets Element::owner} (opposite
 * Classifier::substitution)
 * 
 * Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are
 * expected.
**/