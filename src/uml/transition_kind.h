/**~state machine~
 * TransitionKind [Enumeration]
 * 
 * Description
 * 
 * TransitionKind is an Enumeration type used to
 * differentiate the various kinds of Transitions.
 * 
 * Diagrams
 * 
 *  Behavior State Machines
 * 
 * Literals
 * 
 *  internal
 * 
 * Implies that the Transition,
 * if triggered, occurs without exiting or entering 
 * the source State 
 * (i.e., it does not cause a state change).
 * This means that the entry or exit condition
 * of the source State will not be invoked. An
 * internal Transition can be taken even if
 * the SateMachine is in one or more Regions
 * nested within the associated State.
 * 
 *  local
 * 
 * Implies that the Transition,
 * if triggered, will not exit the composite (source) State,
 * but it will exit and re-enter
 * any state within the composite State
 * that is in the current state configuration.
 * 
 *  external
 * 
 * Implies that the Transition,
 * if triggered,
 * will exit the composite (source) State.
**/