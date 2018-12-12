/**~classification~
 * ParameterSet [Class]
 * 
 * Description
 * 
 * A ParameterSet designates alternative sets of inputs or outputs that a Behavior may use.
 * 
 * Diagrams
 * 
 * Features, Behaviors
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Association Ends
 * 
 *  ♦ condition : Constraint [0..*]{subsets Element::ownedElement} (opposite
 * A_condition_parameterSet::parameterSet)
 * 
 * A constraint that should be satisfied for the owner of the Parameters in an input ParameterSet to start execution
 * using the values provided for those Parameters, or the owner of the Parameters in an output ParameterSet to
 * end execution providing the values for those Parameters, if all preconditions and conditions on input
 * ParameterSets were satisfied.
 * 
 *  parameter : Parameter [1..*] (opposite Parameter::parameterSet)
 * 
 * Parameters in the ParameterSet.
 * 
 * Constraints
 * 
 *  same_parameterized_entity
 * 
 * The Parameters in a ParameterSet must all be inputs or all be outputs of the same parameterized entity, and the
 * ParameterSet is owned by that entity.
 * 
 * inv: parameter->forAll(p1, p2 | self.owner = p1.owner and self.owner = p2.owner and
 * p1.direction = p2.direction)
 * 
 *  input
 * 
 * If a parameterized entity has input Parameters that are in a ParameterSet, then any inputs that are not in a
 * ParameterSet must be streaming. Same for output Parameters.
 * 
 * inv: ((parameter->exists(direction = ParameterDirectionKind::_'in')) implies
 * behavioralFeature.ownedParameter->select(p | p.direction = ParameterDirectionKind::_'in'
 * and p.parameterSet->isEmpty())->forAll(isStream))
 * and
 * ((parameter->exists(direction = ParameterDirectionKind::out)) implies
 * behavioralFeature.ownedParameter->select(p | p.direction = ParameterDirectionKind::out
 * and p.parameterSet->isEmpty())->forAll(isStream))
 * 
 *  two_parameter_sets
 * 
 * Two ParameterSets cannot have exactly the same set of Parameters.
 * 
 * inv: parameter->forAll(parameterSet->forAll(s1, s2 | s1->size() = s2->size() implies
 * s1.parameter->exists(p | not s2.parameter->includes(p))))
**/