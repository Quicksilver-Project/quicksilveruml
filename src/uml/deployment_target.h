#include "named_element.h"

/**~deployment~ 
 * A_deployedElement_deploymentTarget [Association]
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Owned Ends
 * 
 *  deploymentTarget : DeploymentTarget [0..*] (opposite DeploymentTarget::deployedElement)
 **/
/**
 * A_deployment_location [Association]
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Member Ends
 * 
 *  DeploymentTarget::deployment
 *  Deployment::location
**/