/**~action~
 * StartObjectBehaviorAction [Class]
 * 
 * Description
 * 
 * A StartObjectBehaviorAction is an InvocationAction that starts the execution either of a directly instantiated Behavior
 * or of the classifierBehavior of an object. Argument values may be supplied for the input Parameters of the Behavior. If
 * the Behavior is invoked synchronously, then output values may be obtained for output Parameters.
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * CallAction
 * 
 * Association Ends
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_startObjectBehaviorAction::startObjectBehaviorAction)
 * 
 * An InputPin that holds the object that is either a Behavior to be started or has a classifierBehavior to be started.
 * 
 * Operations
 * 
 *  outputParameters() : Parameter [0..*]{ordered} {redefines CallAction::outputParameters()}
 * 
 * Return the inout, out and return ownedParameters of the Behavior being called.
 * 
 * body: self.behavior().outputParameters()
 * 
 *  inputParameters() : Parameter [0..*]{ordered} {redefines CallAction::inputParameters()}
 * 
 * Return the in and inout ownedParameters of the Behavior being called.
 * 
 * body: self.behavior().inputParameters()
 * 
 *  behavior() : Behavior [0..1]
 * 
 * If the type of the object InputPin is a Behavior, then that Behavior. Otherwise, if the type of the object InputPin
 * is a BehavioredClassifier, then the classifierBehavior of that BehavioredClassifier.
 * 
 * body: if object.type.oclIsKindOf(Behavior) then
 * object.type.oclAsType(Behavior)
 * else if object.type.oclIsKindOf(BehavioredClassifier) then
 * object.type.oclAsType(BehavioredClassifier).classifierBehavior
 * else
 * null
 * endif
 * endif
 * 
 * Constraints
 * 
 *  multiplicity_of_object
 * 
 * The multiplicity of the object InputPin must be 1..1.
 * 
 * inv: object.is(1,1)
 * 
 *  type_of_object
 * 
 * The type of the object InputPin must be either a Behavior or a BehavioredClassifier with a classifierBehavior.
 * 
 * inv: self.behavior()<>null
 * 
 *  no_onport
 * 
 * A StartObjectBehaviorAction may not specify onPort.
 * 
 * inv: onPort->isEmpty()
**/