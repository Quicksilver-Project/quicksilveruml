/**~common structure~
 * A_annotatedElement_comment [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  comment : Comment [0..*] (opposite Comment::annotatedElement)
**/
/**
 * A_ownedComment_owningElement [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  owningElement : Element [0..1]{subsets Element::owner} (opposite Element::ownedComment)
**/