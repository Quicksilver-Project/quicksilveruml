/**~action~
 * QualifierValue [Class]
 * 
 * Description
 * 
 * A QualifierValue is an Element that is used as part of LinkEndData to provide the value for a single qualifier of the end
 * given by the LinkEndData.
 * 
 * Diagrams
 * 
 * Link End Data
 * 
 * Generalizations
 * 
 * Element
 * 
 * Association Ends
 * 
 *  qualifier : Property [1..1] (opposite A_qualifier_qualifierValue::qualifierValue)
 * 
 * The qualifier Property for which the value is to be specified.
 * 
 *  value : InputPin [1..1] (opposite A_value_qualifierValue::qualifierValue)
 * 
 * The InputPin from which the specified value for the qualifier is taken.
 * 
 * Constraints
 * 
 *  multiplicity_of_qualifier
 * 
 * The multiplicity of the value InputPin is 1..1.
 * 
 * inv: value.is(1,1)
 * 
 *  type_of_qualifier
 * 
 * The type of the value InputPin conforms to the type of the qualifier Property.
 * 
 * inv: value.type.conformsTo(qualifier.type)
 * 
 *  qualifier_attribute
 * 
 * The qualifier must be a qualifier of the Association end of the linkEndData that owns this QualifierValue.
 * 
 * inv: linkEndData.end.qualifier->includes(qualifier)
**/