/**~classification~
 * OperationTemplateParameter [Class]
 * 
 * Description
 * 
 * An OperationTemplateParameter exposes an Operation as a formal parameter for a template.
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Generalizations
 * 
 * TemplateParameter
 * 
 * Association Ends
 * 
 *  parameteredElement : Operation [1..1]{redefines TemplateParameter::parameteredElement} (opposite
 * Operation::templateParameter)
 * 
 * The Operation exposed by this OperationTemplateParameter.
 * 
 * Constraints
 * 
 *  match_default_signature
 * 
 * inv: default->notEmpty() implies (default.oclIsKindOf(Operation) and (let defaultOp :
 * Operation = default.oclAsType(Operation) in
 * defaultOp.ownedParameter->size() = parameteredElement.ownedParameter->size() and
 * Sequence{1.. defaultOp.ownedParameter->size()}->forAll( ix |
 * let p1: Parameter = defaultOp.ownedParameter->at(ix), p2 : Parameter =
 * parameteredElement.ownedParameter->at(ix) in
 * p1.type = p2.type and p1.upper = p2.upper and p1.lower = p2.lower and p1.direction
 * = p2.direction and p1.isOrdered = p2.isOrdered and p1.isUnique = p2.isUnique)))
**/