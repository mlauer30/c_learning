/*
 * ASSIGNMENT 10: Advanced Topics (Capstone)
 *
 * Task: Function Pointer Calculator Engine
 * Build a calculator that uses function pointers and macros
 *
 * Requirements:
 * 1. Define calculator operations as functions:
 *    - add, subtract, multiply, divide, power, modulo
 * 2. Define Operation struct:
 *    - char name[20]
 *    - char symbol
 *    - function pointer to operation
 * 3. Create:
 *    - register_operation() to add operations
 *    - find_operation(symbol) to look up by symbol
 *    - execute(symbol, a, b) to run operation
 * 4. Use macros for:
 *    - MAX_OPERATIONS to limit registered operations
 *    - DEBUG macros for logging
 *    - SAFE_DIVIDE to check for division by zero
 * 5. Implement bit manipulation:
 *    - Create function bit_set(int *flags, int bit)
 *    - Create function bit_clear(int *flags, int bit)
 *    - Create function bit_check(int flags, int bit)
 * 6. Test all operations
 *
 * Expected output:
 * === Registered Operations ===
 * +: add
 * -: subtract
 * *: multiply
 * /: divide
 * ^: power
 * %: modulo
 *
 * === Results ===
 * 10 + 5 = 15
 * 10 - 5 = 5
 * 10 * 5 = 50
 * 10 / 5 = 2.0
 * 2 ^ 3 = 8
 * 10 % 3 = 1
 *
 * BONUS (Optional):
 * - Implement calculator state machine
 * - Add statistics (last_result, operation_count)
 * - Use static variables to track state
 * - Implement undo/redo with function pointers
 * - Add more complex operations (log, sqrt, trigonometry)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_OPERATIONS 10

// TODO: Define your Operation struct here

// TODO: Declare your functions here

int main() {
    // TODO: Write your solution here
    // 1. Register all operations
    // 2. Display registered operations
    // 3. Execute calculations using function pointers
    // 4. Test bit manipulation functions

    return 0;
}

// TODO: Implement your functions here
