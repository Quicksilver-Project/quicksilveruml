/**~classification~
 * Generalization [Class]
 * 
 * Description
 * 
 * A Generalization is a taxonomic relationship between a more general Classifier and a more specific Classifier. Each
 * instance of the specific Classifier is also an instance of the general Classifier. The specific Classifier inherits the features
 * of the more general Classifier. A Generalization is owned by the specific Classifier.
 * 
 * Diagrams
 * 
 * Classifiers, Generalization Sets
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Attributes
 * 
 *  isSubstitutable : Boolean [0..1] = true
 * 
 * Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the
 * execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If
 * false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such
 * a constraint or not.
 * 
 * Association Ends
 * 
 *  general : Classifier [1..1]{subsets DirectedRelationship::target} (opposite
 * A_general_generalization::generalization)
 * 
 * The general classifier in the Generalization relationship.
 * 
 *  generalizationSet : GeneralizationSet [0..*] (opposite GeneralizationSet::generalization)
 * 
 * Represents a set of instances of Generalization. A Generalization may appear in many GeneralizationSets.
 * 
 *  specific : Classifier [1..1]{subsets DirectedRelationship::source, subsets Element::owner} (opposite
 * Classifier::generalization)
 * 
 * The specializing Classifier in the Generalization relationship.
**/