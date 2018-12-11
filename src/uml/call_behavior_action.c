/**~action~
 * CallBehaviorAction [Class]
 * 
 * Description
 * 
 * A CallBehaviorAction is a CallAction that invokes a Behavior directly. The argument values of the CallBehaviorAction
 * are passed on the input Parameters of the invoked Behavior. If the call is synchronous, the execution of the
 * CallBehaviorAction waits until the execution of the invoked Behavior completes and the values of output Parameters of
 * the Behavior are placed on the result OutputPins. If the call is asynchronous, the CallBehaviorAction completes
 * immediately and no results values can be provided.
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
 *  behavior : Behavior [1..1] (opposite A_behavior_callBehaviorAction::callBehaviorAction)
 * 
 * The Behavior being invoked.
 * 
 * Operations
 * 
 *  outputParameters() : Parameter [0..*]{ordered} {redefines CallAction::outputParameters()}
 * 
 * Return the inout, out and return ownedParameters of the Behavior being called.
 * 
 * body: behavior.outputParameters()
 * 
 *  inputParameters() : Parameter [0..*]{ordered} {redefines CallAction::inputParameters()}
 * 
 * Return the in and inout ownedParameters of the Behavior being called.
 * 
 * body: behavior.inputParameters()
 * 
 * Constraints
 * 
 *  no_onport
 * 
 * A CallBehaviorAction may not specify onPort.
 * 
 * inv: onPort=null
**/