/* Assignment: PA-01 FSM
 * Date: 09/17/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: accepting.c
 */
#include "accepting.h"
#include "system.h"
#include "statemodel.h"

extern state_t* default_event_handler();
extern void default_action();

 state_t accepting  = {
    order_received, // Order_recieved
    default_event_handler, // Invalid Payment
    default_event_handler, // Valid Payment
    default_event_handler, // Manufacture failed
    default_event_handler, // Manufacture completed
    default_event_handler, // Shipment lost
    default_event_handler, // Shipment arrived
    default_action, // Entry
    default_action // Exit
 };

state_t* order_received()
{
    getOrderSize();
    resetAttempts();
    return &processing;
}
