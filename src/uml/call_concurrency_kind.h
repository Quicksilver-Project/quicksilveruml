/**~classification~
 * CallConcurrencyKind [Enumeration]
 * 
 * Description
 * 
 * CallConcurrencyKind is an Enumeration used to specify the semantics of concurrent calls to a BehavioralFeature.
 * 
 * Diagrams
 * 
 *  Features
 * 
 * Literals
 * 
 *  sequential
 * 
 * No concurrency management mechanism is associated with the BehavioralFeature and, therefore, concurrency
 * conflicts may occur. Instances that invoke a BehavioralFeature need to coordinate so that only one invocation
 * to a target on any BehavioralFeature occurs at once.
 * 
 *  guarded
 * 
 * Multiple invocations of a BehavioralFeature that overlap in time may occur to one instance, but only one is
 * allowed to commence. The others are blocked until the performance of the currently executing
 * BehavioralFeature is complete. It is the responsibility of the system designer to ensure that deadlocks do not
 * occur due to simultaneous blocking.
 * 
 *  concurrent
 * 
 * Multiple invocations of a BehavioralFeature that overlap in time may occur to one instance and all of them
 * may proceed concurrently.
**/

#ifndef call_concurrency_kind
#define call_concurrency_kind

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif