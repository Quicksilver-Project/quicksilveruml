/**~common structure~
 * Comment [Class]
 * 
 * Description
 * 
 * A Comment is a textual annotation that can be attached to a set of Elements.
 * 
 * Diagrams
 * Root
 * 
 * Generalizations
 * Element
 * 
 * Attributes
 * 
 *  body : String [0..1]
 * Specifies a string that is the comment.
 * 
 * Association Ends
 * 
 *  annotatedElement : Element [0..*] (opposite A_annotatedElement_comment::comment)
 * References the Element(s) being commented.
**/