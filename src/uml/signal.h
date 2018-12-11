/**~simple classifier~
 * A_signal_signalEvent [Association]
 * 
 * Diagrams
 * 
 * Events
 * 
 * Owned Ends
 * 
 *  signalEvent : SignalEvent [0..*] (opposite SignalEvent::signal)
**/
/**
 * A_signal_reception [Association]
 * 
 * Diagrams
 * 
 * Signals
 * 
 * Owned Ends
 * 
 *  reception : Reception [0..*] (opposite Reception::signal)
**/
/**
 * A_ownedAttribute_owningSignal [Association]
 * 
 * Diagrams
 * 
 * Signals
 * 
 * Owned Ends
 * 
 *  owningSignal : Signal [0..1]{subsets NamedElement::namespace, subsets A_attribute_classifier::classifier}
 * (opposite Signal::ownedAttribute)
**/
/**
 * A_signal_broadcastSignalAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  broadcastSignalAction : BroadcastSignalAction [0..*] (opposite BroadcastSignalAction::signal)
**/
/**
 * A_signal_sendSignalAction [Association]
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Owned Ends
 * 
 *  sendSignalAction : SendSignalAction [0..*] (opposite SendSignalAction::signal)
**/