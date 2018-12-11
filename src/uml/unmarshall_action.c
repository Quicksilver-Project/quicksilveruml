/**~action~
 * UnmarshallAction [Class]
 * 
 * Description
 * 
 * An UnmarshallAction is an Action that retrieves the values of the StructuralFeatures of an object and places them on
 * OutputPins.
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite A_object_unmarshallAction::unmarshallAction)
 * 
 * The InputPin that gives the object to be unmarshalled.
 * 
 *  ♦ result : OutputPin [1..*]{ordered, subsets Action::output} (opposite
 * A_result_unmarshallAction::unmarshallAction)
 * 
 * The OutputPins on which are placed the values of the StructuralFeatures of the input object.
 * 
 *  unmarshallType : Classifier [1..1] (opposite A_unmarshallType_unmarshallAction::unmarshallAction)
 * 
 * The type of the object to be unmarshalled.
 * 
 * Constraints
 * 
 *  structural_feature
 * 
 * The unmarshallType must have at least one StructuralFeature.
 * 
 * inv: unmarshallType.allAttributes()->size() >= 1
 * 
 *  number_of_result
 * 
 * The number of result outputPins must be the same as the number of attributes of the unmarshallType.
 * 
 * inv: unmarshallType.allAttributes()->size() = result->size()
 * 
 *  type_ordering_and_multiplicity
 * 
 * The type, ordering and multiplicity of each attribute of the unmarshallType must be compatible with the type,
 * ordering and multiplicity of the corresponding result OutputPin.
 * 
 * inv: let attribute:OrderedSet(Property) = unmarshallType.allAttributes() in
 * Sequence{1..result->size()}->forAll(i |
 * attribute->at(i).type.conformsTo(result->at(i).type) and
 * attribute->at(i).isOrdered=result->at(i).isOrdered and
 * attribute->at(i).compatibleWith(result->at(i)))
 * 
 *  multiplicity_of_object
 * 
 * The multiplicity of the object InputPin is 1..1
 * 
 * inv: object.is(1,1)
 * 
 *  object_type
 * 
 * The type of the object InputPin conform to the unmarshallType.
 * 
 * inv: object.type.conformsTo(unmarshallType)
**/
