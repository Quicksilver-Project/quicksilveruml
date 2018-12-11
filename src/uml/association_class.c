/**~structured classifier~
 * AssociationClass [Class]
 * 
 * Description
 * 
 * A model element that has both Association and Class properties. An AssociationClass can be seen as an Association that
 * also has Class properties, or as a Class that also has Association properties. It not only connects a set of Classifiers but
 * also defines a set of Features that belong to the Association itself and not to any of the associated Classifiers.
 * 
 * Diagrams
 * 
 * Associations
 * 
 * Generalizations
 * 
 * Class, Association
 * 
 * Constraints
 * 
 *  cannot_be_defined
 * 
 * An AssociationClass cannot be defined between itself and something else.
 * inv: self.endType()->excludes(self) and self.endType()->collect(et|
 * et.oclAsType(Classifier).allParents())->flatten()->excludes(self)
 * 
 *  disjoint_attributes_ends
 * 
 * The owned attributes and owned ends of an AssociationClass are disjoint.
 * inv: ownedAttribute->intersection(ownedEnd)->isEmpty()
**/