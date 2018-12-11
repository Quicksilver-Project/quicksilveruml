/**~UML Diagram Interchange~
 * UMLDiagramElement [Abstract Class]
 * 
 * Description
 * 
 * The most general class for UML diagram interchange.
 * 
 * Generalizations
 * 
 * DiagramElement
 * 
 * Specializations
 * 
 * UMLCompartment, UMLDiagram, UMLEdge, UMLShape
 * 
 * Attributes
 * 
 *  isIcon : Boolean [1..1] = false
 * 
 * For modelElements that have an option to be shown with shapes other than rectangles, such as Actors, or with
 * other identifying shapes inside them, such as arrows distinguishing InputPins and OutputPins, or edges that
 * have an option to be shown with lines other than solid with open arrow heads, such as Realization. A value of
 * true for isIcon indicates the alternative notation shall be shown.
 * 
 * Association Ends
 * 
 *  modelElement : Element [0..*]{redefines DiagramElement::modelElement} (opposite
 * A_UMLDiagramElement_modelElement_umlDiagramElement::umlDiagramElement)
 * 
 * Restricts UMLDiagramElements to show UML Elements, rather than other language elements.
 * 
 *  sharedStyle : UMLStyle [0..1]{redefines DiagramElement::sharedStyle} (opposite
 * A_UMLDiagramElement_sharedStyle_styledElement::styledElement)
 * 
 * Restricts shared styles to UMLStyles.
 * 
 *  ♦ localStyle : UMLStyle [0..1]{redefines DiagramElement::localStyle} (opposite
 * A_UMLDiagramElement_localStyle_styledElement::styledElement)
 * 
 * Restricts owned styles to UMLStyles.
 * 
 *  owningElement : UMLDiagramElement [0..1]{redefines DiagramElement::owningElement} (opposite
 * UMLDiagramElement::ownedElement)
 * 
 * Restricts UMLDiagramElements to be owned by only UMLDiagramElements.
 * 
 *  ♦ ownedElement : UMLDiagramElement [0..*]{ordered, redefines DiagramElement::ownedElement}
 * (opposite UMLDiagramElement::owningElement)
 * 
 * Restricts UMLDiagramElements to own only UMLDiagramElements.
**/