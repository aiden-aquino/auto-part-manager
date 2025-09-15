/* Assignment: PA-01 FSM
 * Date: 09/14/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: system.c
 */

#include "system.h"
#include <stdio.h>

int invalidAttempts = 0;

void getOrderSize()
{
    printf("Got an order of size 0 items\n");
}

void resetAttempts()
{
    invalidAttempts = 0;
    printf("Invalid Payment-Attempts Reset to %d\n", invalidAttempts);
}

void getPymntMethod()
{
    printf("Getting Payment Method\n");
}

void paymentRejected()
{
    printf("Payment Rejected\n");
}

int incrementAttempts()
{
    invalidAttempts++;
    printf("Invalid Payment-Attempts Incremented to %d\n", invalidAttempts);
    return invalidAttempts;
}

void dispatchFactoryLines()
{
    printf("Dispatching Factory Lines\n");
}

void shutDownFactoryLines()
{
    printf("Shutting Down Factory Lines\n");
}

void updateStats(stats_setting value)
{
    printf("Updating Statistics for ");
    if (value == STAT_DONE) printf("SUCCESSFUL");
    else if (value == STAT_LOST) printf("LOST");
    else if (value == STAT_FAIL) printf("FAIL");

    printf(" orders\n");
}

void chargeClient()
{
    printf("Client has been charged\n");
}

void getAddress()
{
    printf("Getting Ship-To Address\n");
}

void startWarranty()
{
    printf("Warranty has started\n");
}

void refund()
{
    printf("Refund Issued\n");
}
