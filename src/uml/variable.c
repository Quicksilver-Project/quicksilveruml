/**~activity~ 
 * Variable [Class]
 * 
 * Description
 * 
 * A Variable is a ConnectableElement that may store values during the execution of an Activity. Reading and writing the
 * values of a Variable provides an alternative means for passing data than the use of ObjectFlows. A Variable may be
 * owned directly by an Activity, in which case it is accessible from anywhere within that activity, or it may be owned by a
 * StructuredActivityNode, in which case it is only accessible within that node.
 * 
 * Diagrams
 * 
 * Activities, Variable Actions, Structured Actions
 * 
 * Generalizations
 * 
 * ConnectableElement, MultiplicityElement
 * 
 * Attributes
 * 
 * Association Ends
 * 
 *  activityScope : Activity [0..1]{subsets NamedElement::namespace} (opposite Activity::variable)
 * 
 * An Activity that owns the Variable.
 * 
 *  scope : StructuredActivityNode [0..1]{subsets NamedElement::namespace} (opposite
 * StructuredActivityNode::variable)
 * 
 * A StructuredActivityNode that owns the Variable.
 * 
 * Operations
 * 
 *  isAccessibleBy(a : Action) : Boolean
 * 
 * A Variable is accessible by Actions within its scope (the Activity or StructuredActivityNode that owns it).
 * body: if scope<>null then scope.allOwnedNodes()->includes(a)
 * else a.containingActivity()=activityScope
 * endif
**/