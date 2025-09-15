/* Assignment: PA-01 FSM
 * Date: 09/14/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: state.h
 */

#ifndef state_h
#define state_h

typedef struct state state_t; // Skeleton/Arbitrary State

typedef state_t* event_handler(void); // Skeleton/Arbitrary Event Handler

typedef void action(void); // Skeleton/Arbitrary Action

 struct state {
    event_handler* order_received;
    event_handler* invalid_payment;
    event_handler* valid_payment;
    event_handler* manufacture_failed;
    event_handler* manufacture_completed;
    event_handler* shipment_lost;
    event_handler* shipment_arrived;
    action* entry_to;
    action* exit_from;
 };

 #endif
