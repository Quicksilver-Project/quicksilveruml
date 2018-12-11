/**~classification~
 * Operation [Class]
 * 
 * Description
 * 
 * An Operation is a BehavioralFeature of a Classifier that specifies the name, type, parameters, and constraints for
 * invoking an associated Behavior. An Operation may invoke both the execution of method behaviors as well as other
 * behavioral responses. Operation specializes TemplateableElement in order to support specification of template
 * operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be
 * exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 * 
 * Diagrams
 * 
 * Operations, Classes, Protocol State Machines, DataTypes, Interfaces, Artifacts, Events, Invocation Actions
 * 
 * Generalizations
 * 
 * TemplateableElement, ParameterableElement, BehavioralFeature
 * 
 * Attributes
 * 
 *  /isOrdered : Boolean [1..1]
 * 
 * Specifies whether the return parameter is ordered or not, if present. This information is derived from the return
 * result for this Operation.
 * 
 *  isQuery : Boolean [1..1] = false
 * 
 * Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged
 * (isQuery=true) or whether side effects may occur (isQuery=false).
 * 
 *  /isUnique : Boolean [1..1]
 * 
 * Specifies whether the return parameter is unique or not, if present. This information is derived from the return
 * result for this Operation.
 * 
 *  /lower : Integer [0..1]
 * 
 * Specifies the lower multiplicity of the return parameter, if present. This information is derived from the return
 * result for this Operation.
 * 
 *  /upper : UnlimitedNatural [0..1]
 * 
 * The upper multiplicity of the return parameter, if present. This information is derived from the return result for
 * this Operation.
 * 
 * Association Ends
 * 
 *  ♦ bodyCondition : Constraint [0..1]{subsets Namespace::ownedRule} (opposite
 * A_bodyCondition_bodyContext::bodyContext)
 * 
 * An optional Constraint on the result values of an invocation of this Operation.
 * 
 *  class : Class [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite Class::ownedOperation)
 * 
 * The Class that owns this operation, if any.
 * 
 *  datatype : DataType [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite DataType::ownedOperation)
 * 
 * The DataType that owns this Operation, if any.
 * 
 *  interface : Interface [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite Interface::ownedOperation)
 * 
 * The Interface that owns this Operation, if any.
 * 
 *  ♦ ownedParameter : Parameter [0..*]{ordered, redefines BehavioralFeature::ownedParameter} (opposite
 * Parameter::operation)
 * 
 * The parameters owned by this Operation.
 * 
 *  ♦ postcondition : Constraint [0..*]{subsets Namespace::ownedRule} (opposite
 * A_postcondition_postContext::postContext)
 * 
 * An optional set of Constraints specifying the state of the system when the Operation is completed.
 * 
 *  ♦ precondition : Constraint [0..*]{subsets Namespace::ownedRule} (opposite
 * A_precondition_preContext::preContext)
 * 
 * An optional set of Constraints on the state of the system when the Operation is invoked.
 * 
 *  raisedException : Type [0..*]{redefines BehavioralFeature::raisedException} (opposite
 * A_raisedException_operation::operation)
 * 
 * The Types representing exceptions that may be raised during an invocation of this operation.
 * 
 *  redefinedOperation : Operation [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedOperation_operation::operation)
 * 
 * The Operations that are redefined by this Operation.
 * 
 *  templateParameter : OperationTemplateParameter [0..1]{redefines ParameterableElement::templateParameter}
 * (opposite OperationTemplateParameter::parameteredElement)
 * 
 * The OperationTemplateParameter that exposes this element as a formal parameter.
 * 
 *  /type : Type [0..1]{} (opposite A_type_operation::operation)
 * 
 * The return type of the operation, if present. This information is derived from the return result for this
 * Operation.
 * 
 * Operations
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible,
 * whether redefinition would be consistent. A redefining operation is consistent with a redefined operation if it
 * has the same number of owned parameters, and for each parameter the following holds: - Direction, ordering
 * and uniqueness are the same. - The corresponding types are covariant, contravariant or invariant. - The
 * multiplicities are compatible, depending on the parameter direction.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: redefiningElement.oclIsKindOf(Operation) and
 * let op : Operation = redefiningElement.oclAsType(Operation) in
 * self.ownedParameter->size() = op.ownedParameter->size() and
 * Sequence{1..self.ownedParameter->size()}->
 * forAll(i |
 * let redefiningParam : Parameter = op.ownedParameter->at(i),
 * redefinedParam : Parameter = self.ownedParameter->at(i) in
 * (redefiningParam.isUnique = redefinedParam.isUnique) and
 * (redefiningParam.isOrdered = redefinedParam. isOrdered) and
 * (redefiningParam.direction = redefinedParam.direction) and
 * (redefiningParam.type.conformsTo(redefinedParam.type) or
 * redefinedParam.type.conformsTo(redefiningParam.type)) and
 * (redefiningParam.direction = ParameterDirectionKind::inout implies
 * (redefinedParam.compatibleWith(redefiningParam) and
 * redefiningParam.compatibleWith(redefinedParam))) and
 * (redefiningParam.direction = ParameterDirectionKind::_'in' implies
 * redefinedParam.compatibleWith(redefiningParam)) and
 * ((redefiningParam.direction = ParameterDirectionKind::out or
 * redefiningParam.direction = ParameterDirectionKind::return) implies
 * redefiningParam.compatibleWith(redefinedParam))
 * )
 * 
 *  isOrdered() : Boolean
 * 
 * If this operation has a return parameter, isOrdered equals the value of isOrdered for that parameter. Otherwise
 * isOrdered is false.
 * 
 * body: if returnResult()->notEmpty() then returnResult()-> exists(isOrdered) else false endif
 * 
 *  isUnique() : Boolean
 * 
 * If this operation has a return parameter, isUnique equals the value of isUnique for that parameter. Otherwise
 * isUnique is true.
 * 
 * body: if returnResult()->notEmpty() then returnResult()->exists(isUnique) else true endif
 * 
 *  lower() : Integer
 * 
 * If this operation has a return parameter, lower equals the value of lower for that parameter. Otherwise lower
 * has no value.
 * 
 * body: if returnResult()->notEmpty() then returnResult()->any(true).lower else null endif
 * 
 *  returnResult() : Parameter [0..*]
 * 
 * The query returnResult() returns the set containing the return parameter of the Operation if one exists,
 * otherwise, it returns an empty set
 * 
 * body: ownedParameter->select (direction = ParameterDirectionKind::return)
 * 
 *  type() : Type
 * 
 * If this operation has a return parameter, type equals the value of type for that parameter. Otherwise type has no
 * value.
 * 
 * body: if returnResult()->notEmpty() then returnResult()->any(true).type else null endif
 * 
 *  upper() : UnlimitedNatural
 * 
 * If this operation has a return parameter, upper equals the value of upper for that parameter. Otherwise upper
 * has no value.
 * 
 * body: if returnResult()->notEmpty() then returnResult()->any(true).upper else null endif
 * 
 * Constraints
 * 
 *  at_most_one_return
 * 
 * An Operation can have at most one return parameter; i.e., an owned parameter with the direction set to 'return.'
 * 
 * inv: self.ownedParameter->select(direction = ParameterDirectionKind::return)->size() <= 1
 * 
 *  only_body_for_query
 * 
 * A bodyCondition can only be specified for a query Operation.
 * 
 * inv: bodyCondition <> null implies isQuery
**/