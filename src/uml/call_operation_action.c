/**~action~
 * CallOperationAction [Class]
 * 
 * Description
 * 
 * A CallOperationAction is a CallAction that transmits an Operation call request to the target object, where it may cause
 * the invocation of associated Behavior. The argument values of the CallOperationAction are passed on the input
 * Parameters of the Operation. If call is synchronous, the execution of the CallOperationAction waits until the execution
 * of the invoked Operation completes and the values of output Parameters of the Operation are placed on the result
 * OutputPins. If the call is asynchronous, the CallOperationAction completes immediately and no results values can be
 * provided.
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
 *  operation : Operation [1..1] (opposite A_operation_callOperationAction::callOperationAction)
 * 
 * The Operation being invoked.
 * 
 *  ♦ target : InputPin [1..1]{subsets Action::input} (opposite A_target_callOperationAction::callOperationAction)
 * 
 * The InputPin that provides the target object to which the Operation call request is sent.
 * 
 * Operations
 * 
 *  outputParameters() : Parameter [0..*]{ordered} {redefines CallAction::outputParameters()}
 * 
 * Return the inout, out and return ownedParameters of the Operation being called.
 * 
 * body: operation.outputParameters()
 * 
 *  inputParameters() : Parameter [0..*]{ordered} {redefines CallAction::inputParameters()}
 * 
 * Return the in and inout ownedParameters of the Operation being called.
 * 
 * body: operation.inputParameters()
 * 
 * Constraints
 * 
 *  type_target_pin
 * 
 * If onPort has no value, the operation must be an owned or inherited feature of the type of the target InputPin,
 * otherwise the Port given by onPort must be an owned or inherited feature of the type of the target InputPin, and
 * the Port must have a required or provided Interface with the operation as an owned or inherited feature.
 * 
 * inv: if onPort=null then target.type.oclAsType(Classifier).allFeatures()-
 * >includes(operation)
 * else target.type.oclAsType(Classifier).allFeatures()->includes(onPort) and onPort.provided-
 * >union(onPort.required).allFeatures()->includes(operation)
 * endif
**/