/**~UML Diagram Interchange~
 * UMLDiagramWithAssociations [Abstract Class]
 * 
 * Description
 * 
 * Specifies the common aspects of diagrams that show associations.
 * 
 * Generalizations
 * 
 * UMLDiagram
 * 
 * Specializations
 * 
 * UMLStructureDiagram, UMLUseCaseDiagram
 * 
 * Attributes
 * 
 *  isAssociationDotShown : Boolean [1..1] = false
 * 
 * Indicates whether dot notation for associations shall be used.
 * 
 *  navigabilityNotation : UMLNavigabilityNotationKind [1..1] = oneWay
 * 
 * Indicates when to show navigability of associations or connectors typed by associations.
 * 
 *  nonNavigabilityNotation : UMLNavigabilityNotationKind [1..1] = never
 * 
 * Indicates when to show non-navigability of associations or connectors typed by associations.
**/