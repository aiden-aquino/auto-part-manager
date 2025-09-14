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
    ORDER_RECIEVED,
    INVALID_PAYMENT,
    VALID_PAYMENT,
    MANUFACTURE_FAILED,
    MANUFACTURE_COMPLETED,
    SHIPMENT_LOST,
    SHIPMENT_ARRIVED
} event;
#define INVALID_EVENT -1

/**
 * Controls/Prints the status of the package.
 *
 * @param value status value to switch the package to.
 */
void set_stats_value(stats_setting value);

#endif
