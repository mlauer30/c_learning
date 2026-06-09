/*
 * ASSIGNMENT 9: Memory Management (CRITICAL!)
 *
 * Task: Dynamic Array Library
 * Implement functions to manage dynamic arrays with proper memory handling
 *
 * Requirements:
 * 1. Create a struct DynamicArray:
 *    - int *data (pointer to dynamically allocated array)
 *    - int size (current number of elements)
 *    - int capacity (allocated space)
 * 2. Implement:
 *    - create(int capacity): Allocate new array
 *    - push(DynamicArray *arr, int value): Add element (resize if needed)
 *    - pop(DynamicArray *arr): Remove last element
 *    - get(DynamicArray *arr, int index): Get element safely
 *    - print_array(DynamicArray *arr): Print all elements
 *    - free_array(DynamicArray *arr): Deallocate memory
 * 3. Test with adding/removing elements
 * 4. Verify no memory leaks with valgrind (or Docker checks)
 *
 * Expected behavior:
 * Create array with capacity 5
 * Push 1, 2, 3, 4, 5 -> Array: [1, 2, 3, 4, 5]
 * Push 6 -> Array resizes to capacity 10: [1, 2, 3, 4, 5, 6]
 * Pop -> Array: [1, 2, 3, 4, 5]
 * Get index 2 -> 3
 *
 * BONUS (Optional):
 * - Implement insert at specific index
 * - Implement remove at specific index
 * - Add shrink_to_fit() to reduce memory usage
 * - Create a generic dynamic array (void*)
 * - Handle realloc failures gracefully
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// TODO: Declare your functions here

int main() {
    // TODO: Write your solution here
    // 1. Create dynamic array
    // 2. Add elements (test resize)
    // 3. Remove elements
    // 4. Access elements safely
    // 5. Free memory at the end

    return 0;
}

// TODO: Implement your functions here
