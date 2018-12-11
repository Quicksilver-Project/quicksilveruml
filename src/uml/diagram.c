/**~UML Diagram Interchange~
 * UMLDiagram [Abstract Class]
 * 
 * Description
 * 
 * The most general class for UML diagrams.
 * 
 * Generalizations
 * 
 * Diagram, PackageableElement, UMLDiagramElement
 * 
 * Specializations
 * 
 * UMLDiagramWithAssociations, UMLBehaviorDiagram
 * 
 * Attributes
 * 
 *  isFrame : Boolean [1..1] = true
 * 
 * Indicates when diagram frames shall be shown.
 * 
 *  isIso : Boolean [1..1] = true
 * 
 * Indicate when ISO notation rules shall be followed.
 * 
 *  isInheritedLighter : Boolean [1..1] = false
 * 
 * Association Ends
 * 
 *  heading : UMLLabel [0..1] (opposite A_UMLDiagram_heading_headedDiagram::headedDiagram)
 * 
 * Constraints
 * 
 *  no-frame-no-heading
 * 
 * UMLDiagrams cannot have headings without frames, or vice-versa.
 * 
 * inv: (isFrame = false) = (heading->isEmpty())
 * 
 *  heading_modelElement
 * 
 * The modelElement of the heading is the same as the modelElement of the diagram it heads.
 * 
 * inv: (heading->isEmpty()) or (heading.modelElement = modelElement)
**/