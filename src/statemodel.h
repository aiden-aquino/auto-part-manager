/* Assignment: PA-01 FSM
 * Date: 09/14/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: statemodel.h
 */

#ifndef statemodel_h
#define statemodel_h

#include <stdlib.h>
#include "system.h"
#include "state.h"

extern state_t accepting;
extern state_t manufacturing;
extern state_t processing;
extern state_t shipping;

/**
 * Prints state names depending on the current state.
 */
void printStateName(void);

/**
 * Handles events given by the driver class.
 *
 * @param current_event: The event the driver class
 * has decided is happening at the moment the method is called.
 */
void handle_event(event current_event);

#endif
