/**~activity~
 * ActivityPartition [Class]
 * 
 * Description
 * 
 * An ActivityPartition is a kind of ActivityGroup for identifying ActivityNodes that have some characteristic in common.
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Generalizations
 * 
 * ActivityGroup
 * 
 * Attributes
 * 
 *  isDimension : Boolean [1..1] = false
 * 
 * Indicates whether the ActivityPartition groups other ActivityPartitions along a dimension.
 * 
 *  isExternal : Boolean [1..1] = false
 * 
 * Indicates whether the ActivityPartition represents an entity to which the partitioning structure does not apply.
 * 
 * Association Ends
 * 
 *  edge : ActivityEdge [0..*]{subsets ActivityGroup::containedEdge} (opposite ActivityEdge::inPartition)
 * 
 * ActivityEdges immediately contained in the ActivityPartition.
 * 
 *  node : ActivityNode [0..*]{subsets ActivityGroup::containedNode} (opposite ActivityNode::inPartition)
 * 
 * ActivityNodes immediately contained in the ActivityPartition.
 * 
 *  represents : Element [0..1] (opposite A_represents_activityPartition::activityPartition)
 * 
 * An Element represented by the functionality modeled within the ActivityPartition.
 * 
 *  ♦ subpartition : ActivityPartition [0..*]{subsets ActivityGroup::subgroup} (opposite
 * ActivityPartition::superPartition)
 * 
 * Other ActivityPartitions immediately contained in this ActivityPartition (as its subgroups).
 * 
 *  superPartition : ActivityPartition [0..1]{subsets ActivityGroup::superGroup} (opposite
 * ActivityPartition::subpartition)
 * 
 * Other ActivityPartitions immediately containing this ActivityPartition (as its superGroups).
 * 
 * Constraints
 * 
 *  represents_classifier
 * 
 * If a non-external ActivityPartition represents a Classifier and has a superPartition, then the superPartition must
 * represent a Classifier, and the Classifier of the subpartition must be nested (nestedClassifier or
 * ownedBehavior) in the Classifier represented by the superPartition, or be at the contained end of a composition
 * Association with the Classifier represented by the superPartition.
 * inv: (not isExternal and represents.oclIsKindOf(Classifier) and superPartition->notEmpty())
 * implies
 * (
 * let representedClassifier : Classifier = represents.oclAsType(Classifier) in
 * superPartition.represents.oclIsKindOf(Classifier) and
 * let representedSuperClassifier : Classifier =
 * superPartition.represents.oclAsType(Classifier) in
 * (representedSuperClassifier.oclIsKindOf(BehavioredClassifier) and
 * representedClassifier.oclIsKindOf(Behavior) and
 * representedSuperClassifier.oclAsType(BehavioredClassifier).ownedBehavior-
 * >includes(representedClassifier.oclAsType(Behavior)))
 * or
 * (representedSuperClassifier.oclIsKindOf(Class) and
 * representedSuperClassifier.oclAsType(Class).nestedClassifier-
 * >includes(representedClassifier))
 * or
 * (Association.allInstances()->exists(a | a.memberEnd->exists(end1 | end1.isComposite
 * and end1.type = representedClassifier and
 * a.memberEnd-
 * >exists(end2 | end1<>end2 and end2.type = representedSuperClassifier))))
 * )
 * 
 *  represents_property_and_is_contained
 * 
 * If an ActivityPartition represents a Property and has a superPartition, then the Property must be of a Classifier
 * represented by the superPartition, or of a Classifier that is the type of a Property represented by the
 * superPartition.
 * inv: (represents.oclIsKindOf(Property) and superPartition->notEmpty()) implies
 * (
 * (superPartition.represents.oclIsKindOf(Classifier) and represents.owner =
 * superPartition.represents) or
 * (superPartition.represents.oclIsKindOf(Property) and represents.owner =
 * superPartition.represents.oclAsType(Property).type)
 * )
 * 
 *  represents_property
 * 
 * If an ActivityPartition represents a Property and has a superPartition representing a Classifier, then all the other
 * non-external subpartitions of the superPartition must represent Properties directly owned by the same
 * Classifier.
 * inv: (represents.oclIsKindOf(Property) and superPartition->notEmpty() and
 * superPartition.represents.oclIsKindOf(Classifier)) implies
 * (
 * let representedClassifier : Classifier = superPartition.represents.oclAsType(Classifier)
 * in
 * superPartition.subpartition->reject(isExternal)->forAll(p |
 * p.represents.oclIsKindOf(Property) and p.owner=representedClassifier)
 * )
 *  dimension_not_contained
 * An ActvivityPartition with isDimension = true may not be contained by another ActivityPartition.
 * inv: isDimension implies superPartition->isEmpty()
**/