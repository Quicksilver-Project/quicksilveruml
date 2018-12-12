/**~UML Diagram Interchange~
 * UMLStyle [Class]
 * 
 * Description
 * 
 * The most general class for Styles in UML.
 * 
 * Generalizations
 * 
 * Style,
 * PackageableElement
 * 
 * Attributes
 * 
 *  fontName : String [0..1]
 * 
 * Name of a font used to render strings.
 * 
 *  fontSize : Real [0..1]
 * 
 * Size of a font for rendering strings, given in typographical points.
 * 
 * Constraints
 * 
 *  fontsize_positive
 * 
 * fontSize must be greater than zero.
 * 
 * inv: fontSize > 0
**/