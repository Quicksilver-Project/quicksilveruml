/**~classification~
 * BehavioralFeature [Abstract Class]
 * 
 * Description
 * 
 * A BehavioralFeature is a feature of a Classifier that specifies an aspect of the behavior of its instances. A
 * BehavioralFeature is implemented (realized) by a Behavior. A BehavioralFeature specifies that a Classifier will respond
 * to a designated request by invoking its implementing method.
 * 
 * Diagrams
 * 
 * Features, Operations, Signals, Behaviors
 * 
 * Generalizations
 * 
 * Feature, Namespace
 * 
 * Specializations
 * 
 * Operation, Reception
 * 
 * Attributes
 * 
 *  concurrency : CallConcurrencyKind [1..1] = sequential
 * 
 * Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a
 * Class with isActive being false). Active instances control access to their own BehavioralFeatures.
 * 
 *  isAbstract : Boolean [1..1] = false
 * 
 * If true, then the BehavioralFeature does not have an implementation, and one must be supplied by a more
 * specific Classifier. If false, the BehavioralFeature must have an implementation in the Classifier or one must be
 * inherited.
 * 
 * Association Ends
 * 
 *  method : Behavior [0..*] (opposite Behavior::specification)
 * 
 * A Behavior that implements the BehavioralFeature. There may be at most one Behavior for a particular pairing
 * of a Classifier (as owner of the Behavior) and a BehavioralFeature (as specification of the Behavior).
 * 
 *  ♦ ownedParameter : Parameter [0..*]{ordered, subsets Namespace::ownedMember} (opposite
 * A_ownedParameter_ownerFormalParam::ownerFormalParam)
 * 
 * The ordered set of formal Parameters of this BehavioralFeature.
 * 
 *  ♦ ownedParameterSet : ParameterSet [0..*]{subsets Namespace::ownedMember} (opposite
 * A_ownedParameterSet_behavioralFeature::behavioralFeature)
 * 
 * The ParameterSets owned by this BehavioralFeature.
 * 
 *  raisedException : Type [0..*] (opposite A_raisedException_behavioralFeature::behavioralFeature)
 * 
 * The Types representing exceptions that may be raised during an invocation of this BehavioralFeature.
 * 
 * Operations
 * 
 *  isDistinguishableFrom(n : NamedElement, ns : Namespace) : Boolean {redefines
 * NamedElement::isDistinguishableFrom()}
 * 
 * The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same
 * Namespace. It specifies that they must have different signatures.
 * 
 * body: (n.oclIsKindOf(BehavioralFeature) and ns.getNamesOfMember(self)-
 * >intersection(ns.getNamesOfMember(n))->notEmpty()) implies
 * Set{self}->including(n.oclAsType(BehavioralFeature))->isUnique(ownedParameter->collect(p|
 * Tuple { name=p.name,
 * type=p.type,effect=p.effect,direction=p.direction,isException=p.isException,
 * isStream=p.isStream,isOrdered=p.isOrdered,isUnique=p.isUnique,lower=p.lower,
 * upper=p.upper }))
 * 
 *  inputParameters() : Parameter [0..*]{ordered}
 * 
 * The ownedParameters with direction in and inout.
 * 
 * body: ownedParameter->select(direction=ParameterDirectionKind::_'in' or
 * direction=ParameterDirectionKind::inout)
 * 
 *  outputParameters() : Parameter [0..*]{ordered}
 * 
 * The ownedParameters with direction out, inout, or return.
 * 
 * body: ownedParameter->select(direction=ParameterDirectionKind::out or
 * direction=ParameterDirectionKind::inout or direction=ParameterDirectionKind::return)
 * 
 * Constraints
 * 
 *  abstract_no_method
 * 
 * When isAbstract is true there are no methods.
 * 
 * inv: isAbstract implies method->isEmpty()
**/