/**~action~
 * StructuralFeatureAction [Abstract Class]
 * 
 * Description
 * 
 * StructuralFeatureAction is an abstract class for all Actions that operate on StructuralFeatures.
 * 
 * Diagrams
 * 
 * Structural Feature Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Specializations
 * 
 * WriteStructuralFeatureAction, ClearStructuralFeatureAction, ReadStructuralFeatureAction
 * 
 * Association Ends
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_structuralFeatureAction::structuralFeatureAction)
 * 
 * The InputPin from which the object whose StructuralFeature is to be read or written is obtained.
 * 
 *  structuralFeature : StructuralFeature [1..1] (opposite
 * A_structuralFeature_structuralFeatureAction::structuralFeatureAction)
 * The StructuralFeature to be read or written.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the object InputPin must be 1..1.
 * 
 * inv: object.is(1,1)
 * 
 *  object_type
 * 
 * The structuralFeature must either be an owned or inherited feature of the type of the object InputPin, or it must
 * be an owned end of a binary Association whose opposite end had as a type to which the type of the object
 * InputPin conforms.
 * 
 * inv: object.type.oclAsType(Classifier).allFeatures()->includes(structuralFeature) or
 * object.type.conformsTo(structuralFeature.oclAsType(Property).opposite.type)
 * 
 *  visibility
 * 
 * The visibility of the structuralFeature must allow access from the object performing the
 * ReadStructuralFeatureAction.
 * 
 * inv: structuralFeature.visibility = VisibilityKind::public or
 * _'context'.allFeatures()->includes(structuralFeature) or
 * structuralFeature.visibility=VisibilityKind::protected and
 * _'context'.conformsTo(structuralFeature.oclAsType(Property).opposite.type.oclAsType(
 * Classifier))
 * 
 *  not_static
 * 
 * The structuralFeature must not be static.
 * 
 * inv: not structuralFeature.isStatic
 * 
 *  one_featuring_classifier
 * 
 * The structuralFeature must have exactly one featuringClassifier.
 * 
 * inv: structuralFeature.featuringClassifier->size() = 1
**/
