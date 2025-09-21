/* Assignment: PA-01 FSM
 * Date: 09/21/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: shipping.h
 */

 #ifndef shipping_h
 #define shipping_h


 #include "state.h"

 static state_t* shipment_lost();
 static state_t* shipment_arrived();
 static void entry_to_shipping();

 #endif
