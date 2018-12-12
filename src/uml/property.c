/**~classification~
 * Property [Class]
 * 
 * Description
 * 
 * A Property is a StructuralFeature. A Property related by ownedAttribute to a Classifier (other than an association)
 * represents an attribute and might also represent an association end.
 * 
 * It relates an instance of the Classifier to a value or set of values of the type of the attribute.
 * 
 * A Property related by memberEnd to an Association represents an end of the Association.
 * 
 * The type of the Property is the type of the end of the Association.
 * 
 * A Property has the capability of being a DeploymentTarget in a Deployment relationship.
 * 
 * This enables modeling the deployment to hierarchical nodes that have Properties functioning as internal parts.
 * 
 * Property specializes ParameterableElement to specify that a Property can be exposed as a formal template parameter,
 * and provided as an actual parameter in a binding of a template.
 * 
 * Diagrams
 * 
 * Classifiers, Properties, Encapsulated Classifiers, Structured Classifiers, Classes, Associations, DataTypes,
 * Signals, Interfaces, Profiles, Deployments, Artifacts, Link End Data, Link Object Actions
 * 
 * Generalizations
 * 
 * ConnectableElement, DeploymentTarget, StructuralFeature
 * 
 * Specializations
 * 
 * Port, ExtensionEnd
 * 
 * Attributes
 * 
 *  aggregation : AggregationKind [1..1] = none
 * 
 * Specifies the kind of aggregation that applies to the Property.
 * 
 *  /isComposite : Boolean [1..1] = false
 * 
 * If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.
 * This is a derived value, indicating whether the aggregation of the Property is composite or not.
 * 
 *  isDerived : Boolean [1..1] = false
 * 
 * Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 * 
 *  isDerivedUnion : Boolean [1..1] = false
 * 
 * Specifies whether the property is derived as the union of all of the Properties that are constrained to subset it.
 * 
 *  isID : Boolean [1..1] = false
 * 
 * True indicates this property can be used to uniquely identify an instance of the containing Class.
 * 
 * Association Ends
 * 
 *  association : Association [0..1]{subsets A_member_memberNamespace::memberNamespace} (opposite
 * Association::memberEnd)
 * 
 * The Association of which this Property is a member, if any.
 * 
 *  associationEnd : Property [0..1]{subsets Element::owner} (opposite Property::qualifier)
 * 
 * Designates the optional association end that owns a qualifier attribute.
 * 
 *  class : Class [0..1]{subsets NamedElement::namespace, subsets
 * A_ownedAttribute_structuredClassifier::structuredClassifier, subsets A_attribute_classifier::classifier}
 * (opposite Class::ownedAttribute)
 * 
 * The Class that owns this Property, if any.
 * 
 *  datatype : DataType [0..1]{subsets NamedElement::namespace, subsets A_attribute_classifier::classifier}
 * (opposite DataType::ownedAttribute)
 * 
 * The DataType that owns this Property, if any.
 * 
 *  ♦ defaultValue : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_defaultValue_owningProperty::owningProperty)
 * 
 * A ValueSpecification that is evaluated to give a default value for the Property when an instance of the owning
 * Classifier is instantiated.
 * 
 *  interface : Interface [0..1]{subsets NamedElement::namespace, subsets A_attribute_classifier::classifier}
 * (opposite Interface::ownedAttribute)
 * 
 * The Interface that owns this Property, if any.
 * 
 *  /opposite : Property [0..1] (opposite A_opposite_property::property)
 * 
 * In the case where the Property is one end of a binary association this gives the other end.
 * 
 *  owningAssociation : Association [0..1]{subsets Feature::featuringClassifier, subsets
 * NamedElement::namespace, subsets Property::association, subsets RedefinableElement::redefinitionContext}
 * (opposite Association::ownedEnd)
 * 
 * The owning association of this property, if any.
 * 
 *  ♦ qualifier : Property [0..*]{ordered, subsets Element::ownedElement} (opposite Property::associationEnd)
 * 
 * An optional list of ordered qualifier attributes for the end.
 * 
 *  redefinedProperty : Property [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedProperty_property::property)
 * 
 * The properties that are redefined by this property, if any.
 * 
 *  subsettedProperty : Property [0..*] (opposite A_subsettedProperty_property::property)
 * 
 * The properties of which this Property is constrained to be a subset, if any.
 * 
 * Operations
 * 
 *  isAttribute() : Boolean
 * 
 * The query isAttribute() is true if the Property is defined as an attribute of some Classifier.
 * 
 * body: not classifier->isEmpty()
 * 
 *  isCompatibleWith(p : ParameterableElement) : Boolean {redefines
 * ParameterableElement::isCompatibleWith()}
 * 
 * The query isCompatibleWith() determines if this Property is compatible with the specified ParameterableElement.
 * 
 * This Property is compatible with ParameterableElement p
 * 
 * if the kind of this Property is the same as or a subtype of the kind of p.
 * 
 * Further, if p is a TypedElement, then the type of this Property must be conformant with the type of p.
 * 
 * body: self.oclIsKindOf(p.oclType()) and (p.oclIsKindOf(TypeElement) implies
 * self.type.conformsTo(p.oclAsType(TypedElement).type))
 * 
 *  isComposite() : Boolean
 * 
 * The value of isComposite is true only if aggregation is composite.
 * 
 * body: aggregation = AggregationKind::composite
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible,
 * whether redefinition would be logically consistent.
 * 
 * A redefining Property is consistent with a redefined Property
 * 
 * if the type of the redefining Property conforms to the type of the redefined Property, and the
 * multiplicity of the redefining Property (if specified) is contained in the multiplicity of the redefined Property.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: redefiningElement.oclIsKindOf(Property) and
 * let prop : Property = redefiningElement.oclAsType(Property) in
 * (prop.type.conformsTo(self.type) and
 * ((prop.lowerBound()->notEmpty() and self.lowerBound()->notEmpty()) implies
 * prop.lowerBound() >= self.lowerBound()) and
 * ((prop.upperBound()->notEmpty() and self.upperBound()->notEmpty()) implies
 * prop.lowerBound() <= self.lowerBound()) and
 * (self.isComposite implies prop.isComposite))
 * 
 *  isNavigable() : Boolean
 * 
 * The query isNavigable() indicates whether it is possible to navigate across the property.
 * 
 * body: not classifier->isEmpty() or association.navigableOwnedEnd->includes(self)
 * 
 *  opposite() : Property
 * 
 * If this property is a memberEnd of a binary association, then opposite gives the other end.
 * 
 * body: if association <> null and association.memberEnd->size() = 2
 * then
 * association.memberEnd->any(e | e <> self)
 * else
 * null
 * endif
 * 
 *  subsettingContext() : Type [0..*]
 * 
 * The query subsettingContext() gives the context for subsetting a Property.
 * 
 * It consists, in the case of an attribute,
 *  
 * of the corresponding Classifier,
 * 
 * and in the case of an association end,
 * 
 * all of the Classifiers at the other ends.
 * 
 * body: if association <> null
 * then association.memberEnd->excluding(self)->collect(type)->asSet()
 * else
 * if classifier<>null
 * then classifier->asSet()
 * else Set{}
 * endif
 * endif
 * 
 * Constraints
 * 
 *  subsetting_context_conforms
 * 
 * Subsetting may only occur when the context of the subsetting property conforms to the context of the subsetted
 * property.
 * 
 * inv: subsettedProperty->notEmpty() implies
 * (subsettingContext()->notEmpty() and subsettingContext()->forAll (sc |
 * subsettedProperty->forAll(sp |
 * sp.subsettingContext()->exists(c | sc.conformsTo(c)))))
 * 
 *  derived_union_is_read_only
 * 
 * A derived union is read only.
 * 
 * inv: isDerivedUnion implies isReadOnly
 * 
 *  multiplicity_of_composite
 * 
 * A multiplicity on the composing end of a composite aggregation must not have an upper bound greater than 1.
 * 
 * inv: isComposite and association <> null implies opposite.upperBound() <= 1
 * 
 *  redefined_property_inherited
 * 
 * A redefined Property must be inherited from a more general Classifier.
 * 
 * inv: (redefinedProperty->notEmpty()) implies
 * (redefinitionContext->notEmpty() and
 * redefinedProperty->forAll(rp|
 * ((redefinitionContext->collect(fc|
 * fc.allParents()))->asSet())->collect(c| c.allFeatures())->asSet()->includes(rp)))
 * 
 *  subsetting_rules
 * 
 * A subsetting Property may strengthen the type of the subsetted Property, and its upper bound may be less.
 * 
 * inv: subsettedProperty->forAll(sp |
 * self.type.conformsTo(sp.type) and
 * ((self.upperBound()->notEmpty() and sp.upperBound()->notEmpty()) implies
 * self.upperBound() <= sp.upperBound() ))
 * 
 *  binding_to_attribute
 * 
 * A binding of a PropertyTemplateParameter representing an attribute must be to an attribute.
 * 
 * inv: (self.isAttribute()
 * and (templateParameterSubstitution->notEmpty())
 * implies (templateParameterSubstitution->forAll(ts |
 * ts.formal.oclIsKindOf(Property)
 * and ts.formal.oclAsType(Property).isAttribute())))
 * 
 *  derived_union_is_derived
 * 
 * A derived union is derived.
 * 
 * inv: isDerivedUnion implies isDerived
 * 
 *  deployment_target
 * 
 * A Property can be a DeploymentTarget if it is a kind of Node and functions as a part in the internal structure of
 * an encompassing Node.
 * 
 * inv: deployment->notEmpty() implies owner.oclIsKindOf(Node) and Node.allInstances()-
 * >exists(n | n.part->exists(p | p = self))
 * 
 *  subsetted_property_names
 * 
 * A Property may not subset a Property with the same name.
 * 
 * inv: subsettedProperty->forAll(sp | sp.name <> name)
 * 
 *  type_of_opposite_end
 * 
 * If a Property is a classifier-owned end of a binary Association, its owner must be the type of the opposite end.
 * 
 * inv: (opposite->notEmpty() and owningAssociation->isEmpty()) implies classifier =
 * opposite.type
 * 
 *  qualified_is_association_end
 * 
 * All qualified Properties must be Association ends
 * 
 * inv: qualifier->notEmpty() implies association->notEmpty()
**/