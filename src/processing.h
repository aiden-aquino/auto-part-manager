/* Assignment: PA-01 FSM
 * Date: 09/17/2025
 *
 * Team #: FSM-PA Team 13
 * Authors : Aiden Aquino, William Hudson
 * File Name: processing.h
 */

 #ifndef processing_h
 #define processing_h


 #include "state.h"

 static state_t* invalid_payment();
 static state_t* valid_payment();
 static void entry_to_processing();

 #endif
