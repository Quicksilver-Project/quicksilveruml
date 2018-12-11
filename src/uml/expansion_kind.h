/**~action~
 * ExpansionKind [Enumeration]
 * 
 * Description
 * 
 * ExpansionKind is an enumeration type used to specify how an ExpansionRegion executes its contents.
 * 
 * Diagrams
 * 
 *  Expansion Regions
 * 
 * Literals
 * 
 *  parallel
 * 
 * The content of the ExpansionRegion is executed concurrently for the elements of the input collections.
 * 
 *  iterative
 * 
 * The content of the ExpansionRegion is executed iteratively for the elements of the input collections, in the
 * order of the input elements, if the collections are ordered.
 * 
 *  stream
 * 
 * A stream of input collection elements flows into a single execution of the content of the ExpansionRegion, in
 * the order of the collection elements if the input collections are ordered.
**/