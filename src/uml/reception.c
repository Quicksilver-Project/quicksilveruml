/**~simple classifier~
 * Reception [Class]
 * 
 * Description
 * 
 * A Reception is a declaration stating that a Classifier is prepared to react to the receipt of a Signal.
 * 
 * Diagrams
 * 
 * Signals, Interfaces, Classes
 * 
 * Generalizations
 * 
 * BehavioralFeature
 * 
 * Association Ends
 * 
 *  signal : Signal [1..1] (opposite A_signal_reception::reception)
 * 
 * The Signal that this Reception handles.
 * 
 * Constraints
 * 
 *  same_name_as_signal
 * 
 * A Reception has the same name as its signal
 * 
 * inv: name = signal.name
 * 
 *  same_structure_as_signal
 * 
 * A Reception's parameters match the ownedAttributes of its signal by name, type, and multiplicity
 * 
 * inv: signal.ownedAttribute->size() = ownedParameter->size() and
 * Sequence{1..signal.ownedAttribute->size()}->forAll( i |
 * ownedParameter->at(i).direction = ParameterDirectionKind::_'in' and
 * ownedParameter->at(i).name = signal.ownedAttribute->at(i).name and
 * ownedParameter->at(i).type = signal.ownedAttribute->at(i).type and
 * ownedParameter->at(i).lowerBound() = signal.ownedAttribute->at(i).lowerBound() and
 * ownedParameter->at(i).upperBound() = signal.ownedAttribute->at(i).upperBound()
 * )
**/