/**~package~
 * ExtensionEnd [Class]
 * 
 * Description
 * 
 * An extension end is used to tie an extension to a stereotype when extending a metaclass. The default multiplicity of an
 * extension end is 0..1.
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * Property
 * 
 * Attributes
 * 
 *  /lower : Integer [0..1]
 * 
 * This redefinition changes the default multiplicity of association ends, since model elements are usually
 * extended by 0 or 1 instance of the extension stereotype.
 * 
 * Association Ends
 * 
 *  type : Stereotype [1..1]{redefines TypedElement::type} (opposite A_type_extensionEnd::extensionEnd)
 * 
 * References the type of the ExtensionEnd. Note that this association restricts the possible types of an
 * ExtensionEnd to only be Stereotypes.
 * 
 * Operations
 * 
 *  lowerBound() : Integer [0..1] {redefines MultiplicityElement::lowerBound()}
 * 
 * The query lowerBound() returns the lower bound of the multiplicity as an Integer. This is a redefinition of the
 * default lower bound, which normally, for MultiplicityElements, evaluates to 1 if empty.
 * body: if lowerValue=null then 0 else lowerValue.integerValue() endif
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of ExtensionEnd is 0..1 or 1.
 * inv: (lowerBound() = 0 or lowerBound() = 1) and upperBound() = 1
 * 
 *  aggregation
 * 
 * The aggregation of an ExtensionEnd is composite.
 * inv: self.aggregation = AggregationKind::composite
**/