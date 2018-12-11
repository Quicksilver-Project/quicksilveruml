/**~UML Diagram Interchange~
 * UMLCompositeStructureDiagram [Class]
 * 
 * Description
 * 
 * Shows the internal structure of a StructuredClassifier. Also see Annex A.
 * 
 * Generalizations
 * 
 * UMLStructureDiagram
 * 
 * Constraints
 * 
 *  modelElement_mult
 * 
 * UMLCompositeStructureDiagrams must have exactly one modelElement.
 * 
 * inv: modelElement->size() = 1
 * 
 *  modelElement_type
 * 
 * modelElement must be a StructuredClassifier or an InstanceSpecification with a classifier that is a
 * StructuredClassifier.
 * 
 * inv: modelElement->asSequence()->first().oclIsKindOf(StructuredClassifier)
 * or ( modelElement->asSequence()->first().oclIsKindOf(InstanceSpecification)
 * and (modelElement->asSequence()->first().oclAsType(InstanceSpecification).classifier-
 * >select(c | c.oclIsKindOf(StructuredClassifier))->size() > 0))
**/