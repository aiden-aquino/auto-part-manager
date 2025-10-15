# Auto Part Manager

This project implements a Finite State Machine (FSM) that manages the lifecycle of on-demand manufacturing orders for auto parts.

*This project was completed as a course assignment from Fall Semester 2025*

---

## System Description

The system simulates an automated manufacturing process for custom auto parts. It starts in a listening state, waiting for incoming orders, and progresses through several operational states until the order is completed and the system resets for the next request.

Each order includes:
- A single type of auto part
- A quantity representing the number of replicas to produce
- Payment information (e.g., credit card details)

---

## Skills Demonstrated
- Parsing binary file formats (Mini-Elf/Y86)
- Memory inspection and representation
- Disassembly of code and data sections
- Simulating program execution with debug tracing
- Command-line argument parsing and validation

---

## Usage

*This project is designed to be built and run on **Linux**. The makefile uses Unix commands and will most likely not work on native Windows.*<br>

From the project root (mini-elf/), run:
```y86 <option(s)> mini-elf-file```

### Note

There are provided Mini-Elf object files provided in the /tests/inputs directory.

## Options
| **Character** | **Event Description**                          | **Triggered Action / Meaning**                                      |
| :-----------: | ---------------------------------------------- | ------------------------------------------------------------------- |
|     **O**     | Order received                                 | Moves the system from **Listening** → **Processing Payment**        |
|     **V**     | Payment validated                              | Payment confirmed; transition to **Manufacturing**                  |
|     **I**     | Payment rejected                               | Invalid or expired payment; return to **Listening** for a new order |
|     **F**     | Factory failed to manufacture all replicas     | Manufacturing error; order canceled → **Listening**                 |
|     **C**     | Factory successfully manufactured all replicas | Manufacturing complete; transition to **Shipping**                  |
|     **R**     | Delivery confirmed                             | Shipment successful; transition to **Closed**                       |
|     **L**     | Delivery failed                                | Shipment issue detected; order canceled → **Listening**             |
|     **X**     | Terminate program                              | Immediately exit the system (cleanup to be added in later phases)   |

**Options cannot be repeated**
