/**~classification~
 * GeneralizationSet [Class]
 * 
 * Description
 * 
 * A GeneralizationSet is a PackageableElement whose instances represent sets of Generalization relationships.
 * 
 * Diagrams
 * 
 * Classifiers, Generalization Sets
 * 
 * Generalizations
 * 
 * PackageableElement
 * 
 * Attributes
 * 
 *  isCovering : Boolean [1..1] = false
 * 
 * Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a
 * particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an
 * instance of at least one of its specific Classifiers for the GeneralizationSet. 
 * When isCovering is false, there areone or more instances of the particular general Classifier that are not instances of at least one of its specific
 * Classifiers defined for the GeneralizationSet.
 * 
 *  isDisjoint : Boolean [1..1] = false
 * 
 * Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in
 * common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in
 * common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular
 * GeneralizationSet have one or more members in common; that is, their intersection is not empty.
 * 
 * Association Ends
 * 
 *  generalization : Generalization [0..*] (opposite Generalization::generalizationSet)
 * 
 * Designates the instances of Generalization that are members of this GeneralizationSet.
 * 
 *  powertype : Classifier [0..1] (opposite Classifier::powertypeExtent)
 * 
 * Designates the Classifier that is defined as the power type for the associated GeneralizationSet, if there is one.
 * 
 * Constraints
 * 
 *  generalization_same_classifier
 * 
 * Every Generalization associated with a particular GeneralizationSet must have the same general Classifier.
 * 
 * inv: generalization->collect(general)->asSet()->size() <= 1
 * 
 *  maps_to_generalization_set
 * 
 * The Classifier that maps to a GeneralizationSet may neither be a specific nor a general Classifier in any of the
 * Generalization relationships defined for that GeneralizationSet. In other words, a power type may not be an
 * instance of itself nor may its instances be its subclasses.
 * 
 * inv: powertype <> null implies generalization->forAll( gen |
 * not (gen.general = powertype) and not gen.general.allParents()->includes(powertype) and
 * not (gen.specific = powertype) and not powertype.allParents()->includes(gen.specific)
 * )
**/