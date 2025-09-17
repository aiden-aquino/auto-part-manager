/* Assignment: PA-01 FSM
 * Date: 09/17/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: processing.c
 */
#include "processing.h"
#include "system.h"
#include "statemodel.h"

extern state_t* default_event_handler();
extern void default_action();

 state_t processing  = {
    default_event_handler, // Order_recieved
    invalid_payment, // Invalid Payment
    valid_payment, // Valid Payment
    default_event_handler, // Manufacture failed
    default_event_handler, // Manufacture completed
    default_event_handler, // Shipment lost
    default_event_handler, // Shipment arrived
    entry_to_processing, // Entry
    default_action // Exit
 };

state_t* invalid_payment()
{
    if (incrementAttempts() >= 3) {
        paymentRejected();
        return &accepting;
    }

    return &processing;
}

 state_t* valid_payment()
 {
    return &manufacturing;
 }

 void entry_to_processing()
 {
    getPymntMethod();
 }
