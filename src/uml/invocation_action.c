/**~action~
 * InvocationAction [Abstract Class]
 * 
 * Description
 * 
 * InvocationAction is an abstract class for the various actions that request Behavior invocation.
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Specializations
 * 
 * BroadcastSignalAction, CallAction, SendObjectAction, SendSignalAction
 * 
 * Association Ends
 * 
 *  ♦ argument : InputPin [0..*]{ordered, subsets Action::input} (opposite
 * A_argument_invocationAction::invocationAction)
 * 
 * The InputPins that provide the argument values passed in the invocation request.
 * 
 *  onPort : Port [0..1] (opposite A_onPort_invocationAction::invocationAction)
 * 
 * For CallOperationActions, SendSignalActions, and SendObjectActions, an optional Port of the target object
 * through which the invocation request is sent.
**/