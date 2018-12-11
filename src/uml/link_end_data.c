/**~action~
 * LinkEndData [Class]
 * 
 * Description
 * 
 * LinkEndData is an Element that identifies on end of a link to be read or written by a LinkAction. As a link (that is not a
 * link object) cannot be passed as a runtime value to or from an Action, it is instead identified by its end objects and
 * qualifier values, if any. A LinkEndData instance provides these values for a single Association end.
 * 
 * Diagrams
 * 
 * Link End Data, Link Actions
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * LinkEndCreationData, LinkEndDestructionData
 * 
 * Association Ends
 * 
 *  end : Property [1..1] (opposite A_end_linkEndData::linkEndData)
 * 
 * The Association end for which this LinkEndData specifies values.
 * 
 *  ♦ qualifier : QualifierValue [0..*]{subsets Element::ownedElement} (opposite
 * A_qualifier_linkEndData::linkEndData)
 * 
 * A set of QualifierValues used to provide values for the qualifiers of the end.
 * 
 *  value : InputPin [0..1] (opposite A_value_linkEndData::linkEndData)
 * 
 * The InputPin that provides the specified value for the given end. This InputPin is omitted if the LinkEndData
 * specifies the "open" end for a ReadLinkAction.
 * 
 * Operations
 * 
 *  allPins() : InputPin [0..*]{nonunique}
 * 
 * Returns all the InputPins referenced by this LinkEndData. By default this includes the value and qualifier
 * InputPins, but subclasses may override the operation to add other InputPins.
 * 
 * body: value->asBag()->union(qualifier.value)
 * 
 * Constraints
 * 
 *  same_type
 * 
 * The type of the value InputPin conforms to the type of the Association end.
 * 
 * inv: value<>null implies value.type.conformsTo(end.type)
 * 
 *  multiplicity
 * 
 * The multiplicity of the value InputPin must be 1..1.
 * 
 * inv: value<>null implies value.is(1,1)
 * 
 *  end_object_input_pin
 * 
 * The value InputPin is not also the qualifier value InputPin.
 * 
 * inv: value->excludesAll(qualifier.value)
 * 
 *  property_is_association_end
 * 
 * The Property must be an Association memberEnd.
 * 
 * inv: end.association <> null
 * 
 *  qualifiers
 * 
 * The qualifiers must be qualifiers of the Association end.
 * 
 * inv: end.qualifier->includesAll(qualifier.qualifier)
**/