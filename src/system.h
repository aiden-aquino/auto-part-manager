/* Assignment: PA-01 FSM
 * Date: 09/14/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: system.h
 */

#ifndef system_h
#define system_h

// Stats Setting
typedef enum
{
    STAT_DONE,
    STAT_LOST,
    STAT_FAIL
} stats_setting;

// All possible events
typedef enum
{
    ORDER_RECEIVED,
    INVALID_PAYMENT,
    VALID_PAYMENT,
    MANUFACTURE_FAILED,
    MANUFACTURE_COMPLETED,
    SHIPMENT_LOST,
    SHIPMENT_ARRIVED
} event;
#define INVALID_EVENT -1

void getOrderSize();

void resetAttempts();

void getPymntMethod();

void paymentRejected();

int incrementAttempts();

void dispatchFactoryLines();

void shutDownFactoryLines();

void chargeClient();

void getAddress();

void startWarranty();

void refund();

// Function for controlling the status of the shipment.
void updateStats(stats_setting value);
#endif
