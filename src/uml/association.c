/**~structured classifier~
 * Association [Class]
 * 
 * Description
 * 
 * A link is a tuple of values that refer to typed objects. An Association classifies a set of links, each of which is an
 * instance of the Association. Each value in the link refers to an instance of the type of the corresponding end of the
 * Association.
 * 
 * Diagrams
 * 
 * Structured Classifiers, Associations, Profiles, Nodes, Properties, Link Actions
 * 
 * Generalizations
 * 
 * Relationship, Classifier
 * 
 * Specializations
 * 
 * AssociationClass, Extension, CommunicationPath
 * 
 * Attributes
 * 
 *  isDerived : Boolean [1..1] = false
 * 
 * Specifies whether the Association is derived from other model elements such as other Associations.
 * 
 * Association Ends
 * 
 *  /endType : Type [1..*]{subsets Relationship::relatedElement} (opposite A_endType_association::association)
 * 
 * The Classifiers that are used as types of the ends of the Association.
 * 
 *  memberEnd : Property [2..*]{ordered, subsets Namespace::member} (opposite Property::association)
 * 
 * Each end represents participation of instances of the Classifier connected to the end in links of the Association.
 * 
 *  navigableOwnedEnd : Property [0..*]{subsets Association::ownedEnd} (opposite
 * A_navigableOwnedEnd_association::association)
 * 
 * The navigable ends that are owned by the Association itself.
 * 
 *  ♦ ownedEnd : Property [0..*]{ordered, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Association::memberEnd, subsets
 * Namespace::ownedMember} (opposite Property::owningAssociation)
 * 
 * The ends that are owned by the Association itself.
 * 
 * Operations
 * 
 *  endType() : Type [1..*]
 * 
 * endType is derived from the types of the member ends.
 * 
 * body: memberEnd->collect(type)->asSet()
 * 
 * Constraints
 * 
 *  specialized_end_number
 * 
 * An Association specializing another Association has the same number of ends as the other Association.
 * 
 * inv: parents()->select(oclIsKindOf(Association)).oclAsType(Association)->forAll(p |
 * p.memberEnd->size() = self.memberEnd->size())
 * 
 *  specialized_end_types
 * 
 * When an Association specializes another Association, every end of the specific Association corresponds to an
 * end of the general Association, and the specific end reaches the same type or a subtype of the corresponding
 * general end.
 * 
 * inv: Sequence{1..memberEnd->size()}->
 * forAll(i | general->select(oclIsKindOf(Association)).oclAsType(Association)->
 * forAll(ga | self.memberEnd->at(i).type.conformsTo(ga.memberEnd->at(i).type)))
 * 
 *  binary_associations
 * 
 * Only binary Associations can be aggregations.
 * 
 * inv: memberEnd->exists(aggregation <> AggregationKind::none) implies (memberEnd->size() = 2
 * and memberEnd->exists(aggregation = AggregationKind::none))
 * 
 *  association_ends
 * 
 * Ends of Associations with more than two ends must be owned by the Association itself.
 * 
 * inv: memberEnd->size() > 2 implies ownedEnd->includesAll(memberEnd)
 * 
 *  ends_must_be_typed
 * 
 * inv: memberEnd->forAll(type->notEmpty())
**/