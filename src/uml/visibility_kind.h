/**~common structure~
 * VisibilityKind [Enumeration]
 * 
 * Description
 * 
 * VisibilityKind is an enumeration type that defines literals to determine the visibility of Elements in a model.
 * 
 * Diagrams
 * 
 *  Namespaces
 * 
 * Literals
 * 
 *  public
 * 
 * A Named Element with public visibility is visible to all elements that can access the contents of the Namespace
 * that owns it.
 * 
 *  private
 * 
 * A NamedElement with private visibility is only visible inside the Namespace that owns it.
 * 
 *  protected
 * 
 * A NamedElement with protected visibility is visible to Elements that have a generalization relationship to the
 * 
 * Namespace that owns it.
 * 
 *  package
 * 
 * A NamedElement with package visibility is visible to all Elements within the nearest enclosing Package (given
 * that other owning Elements have proper visibility). Outside the nearest enclosing Package, a NamedElement
 * marked as having package visibility is not visible. Only NamedElements that are not owned by Packages can
 * be marked as having package visibility.
**/