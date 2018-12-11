/**~common behavior~
 * FunctionBehavior [Class]
 * 
 * Description
 * 
 * A FunctionBehavior is an OpaqueBehavior that does not access or modify any objects or other external data.
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Generalizations
 * 
 * OpaqueBehavior
 * 
 * Operations
 * 
 *  hasAllDataTypeAttributes(d : DataType) : Boolean
 * 
 * The hasAllDataTypeAttributes query tests whether the types of the attributes of the given DataType are all
 * DataTypes, and similarly for all those DataTypes.
 * body: d.ownedAttribute->forAll(a |
 * a.type.oclIsKindOf(DataType) and
 * hasAllDataTypeAttributes(a.type.oclAsType(DataType)))
 * 
 * Constraints
 * 
 *  one_output_parameter
 * 
 * A FunctionBehavior has at least one output Parameter.
 * inv: self.ownedParameter->
 * select(p | p.direction = ParameterDirectionKind::out or p.direction=
 * ParameterDirectionKind::inout or p.direction= ParameterDirectionKind::return)->size() >= 1
 * 
 *  types_of_parameters
 * 
 * The types of the ownedParameters are all DataTypes, which may not nest anything but other DataTypes.
 * inv: ownedParameter->forAll(p | p.type <> null and
 * p.type.oclIsTypeOf(DataType) and hasAllDataTypeAttributes(p.type.oclAsType(DataType)))
**/
