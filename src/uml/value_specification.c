/**~value~
 * ValueSpecification [Abstract Class]
 * 
 * Description
 * 
 * A ValueSpecification is the specification of a (possibly empty) set of values. A ValueSpecification is a
 * ParameterableElement that may be exposed as a formal TemplateParameter and provided as the actual parameter in the
 * binding of a template.
 * 
 * Diagrams
 * 
 * Expressions, Literals, Time, Intervals, Object Nodes, Activities, Control Nodes, Messages, Lifelines,
 * Fragments, Interaction Uses, Types, Constraints, Events, Features, Properties, Instances, Actions, Object
 * Actions
 * 
 * Generalizations
 * 
 * TypedElement, PackageableElement
 * 
 * Specializations
 * 
 * Duration, Expression, Interval, LiteralSpecification, OpaqueExpression, TimeExpression, InstanceValue
 * 
 * Operations
 * 
 *  booleanValue() : Boolean [0..1]
 * 
 * The query booleanValue() gives a single Boolean value when one can be computed.
 * body: null
 * 
 *  integerValue() : Integer [0..1]
 * 
 * The query integerValue() gives a single Integer value when one can be computed.
 * body: null
 * 
 *  isCompatibleWith(p : ParameterableElement) : Boolean {redefines
 * ParameterableElement::isCompatibleWith()}
 * 
 * The query isCompatibleWith() determines if this ValueSpecification is compatible with the specified
 * ParameterableElement. This ValueSpecification is compatible with ParameterableElement p if the kind of this
 * ValueSpecification is the same as or a subtype of the kind of p. Further, if p is a TypedElement, then the type of
 * this ValueSpecification must be conformant with the type of p.
 * body: self.oclIsKindOf(p.oclType()) and (p.oclIsKindOf(TypedElement) implies
 * self.type.conformsTo(p.oclAsType(TypedElement).type))
 * 
 *  isComputable() : Boolean
 * 
 * The query isComputable() determines whether a value specification can be computed in a model. This
 * operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this
 * operation for all ValueSpecifications that it can compute, and to compute all of those for which the operation is
 * true. A conforming implementation is expected to be able to compute at least the value of all
 * LiteralSpecifications.
 * body: false
 * 
 *  isNull() : Boolean
 * 
 * The query isNull() returns true when it can be computed that the value is null.
 * body: false
 * 
 *  realValue() : Real [0..1]
 * 
 * The query realValue() gives a single Real value when one can be computed.
 * body: null
 * 
 *  stringValue() : String [0..1]
 * 
 * The query stringValue() gives a single String value when one can be computed.
 * body: null
 * 
 *  unlimitedValue() : UnlimitedNatural [0..1]
 * 
 * The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 * body: null
**/