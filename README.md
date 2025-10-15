# Auto Part Manager

This project implements a Finite State Machine (FSM) that manages the lifecycle of on-demand manufacturing orders for auto parts.

*This project was completed as a course assignment from Fall Semester 2025*

---

## System Description

The system begins in a Listening (Accepting) state, waiting for an incoming order. Once an order is received, it progresses through several controlled states:

Accepting (Listening) — Waits for incoming orders.
Processing — Validates payment information.
Manufacturing — Produces the required quantity of the ordered auto part.
Shipping — Ships the completed order and confirms delivery.

Once delivery is confirmed, the order is closed and the system returns to the Accepting state to await the next order.

---

## Event Input Table

| **Character** | **Event Description**                        | **Triggered Action / Meaning**                   |
| :-----------: | -------------------------------------------- | ------------------------------------------------ |
|     **O**     | Order received                               | Move from **Accepting** to **Processing**        |
|     **V**     | Payment validated                            | Transition to **Manufacturing**                  |
|     **I**     | Payment rejected                             | Return to **Accepting**                          |
|     **F**     | Factory failed to manufacture all replicas   | Return to **Accepting**                          |
|     **C**     | Factory successfully completed manufacturing | Transition to **Shipping**                       |
|     **R**     | Delivery confirmed                           | Return to **Accepting** (order closed)           |
|     **L**     | Delivery failed                              | Return to **Accepting**                          |
|     **X**     | Exit the program immediately                 | Program terminates (future cleanup may be added) |


---

## Skills Demonstrated
- Designed and implemented a Finite State Machine (FSM)
- Built an event-driven system reacting to user inputs and transitions
- Structured code into modular .c / .h files for maintainability

---

## Usage

*This project is designed to be built and run on **Linux**. The makefile uses Unix commands and will most likely not work on native Windows.*<br>

From the project root, run:
```make```

Then run the driver.o file with:
```./driver```

---

## Note

There are given tests and expected outputs within the tests/ directory. Each tests/input is a .txt file with a chain of valid inputs and can be passed into the driver.o file using:
```./driver < /tests/inputs/{any of the .txt files}```
