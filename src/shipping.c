/* Assignment: PA-01 FSM
 * Date: 09/21/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: shipping.c
 */
#include "shipping.h"
#include "system.h"
#include "statemodel.h"

extern state_t* default_event_handler();
extern void default_action();

 state_t shipping  = {
    default_event_handler, // Order_recieved
    default_event_handler, // Invalid Payment
    default_event_handler, // Valid Payment
    default_event_handler, // Manufacture failed
    default_event_handler, // Manufacture completed
    shipment_lost, // Shipment lost
    shipment_arrived, // Shipment arrived
    entry_to_shipping, // Entry
    default_action // Exit
 };

state_t* shipment_lost()
{
    refund();
    updateStats(STAT_LOST);
    return &accepting;
}

 state_t* shipment_arrived()
 {
    startWarranty();
    updateStats(STAT_DONE);
    return &accepting;
 }

 void entry_to_shipping()
 {
    getAddress();
 }
