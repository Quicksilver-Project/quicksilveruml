/**~structured classifier~
 * EncapsulatedClassifier [Abstract Class]
 * 
 * Description
 * 
 * An EncapsulatedClassifier may own Ports to specify typed interaction points.
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers, Classes
 * 
 * Generalizations
 * 
 * StructuredClassifier
 * 
 * Specializations
 * 
 * Class
 * 
 * Association Ends
 * 
 *  ♦ /ownedPort : Port [0..*]{subsets StructuredClassifier::ownedAttribute} (opposite
 * A_ownedPort_encapsulatedClassifier::encapsulatedClassifier)
 * 
 * The Ports owned by the EncapsulatedClassifier.
 * 
 * Operations
 * 
 *  ownedPort() : Port [0..*]{ordered}
 * 
 * Derivation for EncapsulatedClassifier::/ownedPort : Port
 * body: ownedAttribute->select(oclIsKindOf(Port))->collect(oclAsType(Port))->asOrderedSet()
**/