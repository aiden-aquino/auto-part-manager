/* Assignment: PA-01 FSM
 * Date: 09/18/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: manufacturing.c
 */
#include "manufacturing.h"
#include "system.h"
#include "statemodel.h"

extern state_t* default_event_handler();
extern void default_action();

 state_t processing  = {
    default_event_handler, // Order_recieved
    default_event_handler, // Invalid Payment
    default_event_handler, // Valid Payment
    manufacture_failed, // Manufacture failed
    manufacture_completed, // Manufacture completed
    default_event_handler, // Shipment lost
    default_event_handler, // Shipment arrived
    entry_to_manufacturing, // Entry
    exit_to_manufacturing // Exit
 };

state_t* manufacture_failed()
{
    updateStats(STAT_FAIL);
    exit_to_manufacturing();
    return &accepting;
}

 state_t* manufacture_completed()
 {
    chargeClient();
    exit_to_manufacturing();
    return &shipping;
 }

 void entry_to_manufacturing()
 {
    dispatchFactoryLines();
 }

  void exit_to_manufacturing()
 {
    shutDownFactoryLines();
 }
