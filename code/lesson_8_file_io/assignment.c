/*
 * ASSIGNMENT 8: File I/O
 *
 * Task: CSV File Handler
 * Read and write student records to a CSV file
 *
 * Requirements:
 * 1. Define a Student struct (id, name, grade)
 * 2. Create a function write_students(filename, students, count)
 *    - Opens file in write mode
 *    - Writes header: "ID,Name,Grade"
 *    - Writes each student as: "1001,Alice,A"
 * 3. Create a function read_students(filename, students)
 *    - Reads the CSV file
 *    - Parses each line
 *    - Stores in struct array
 *    - Returns count of students read
 * 4. Test by:
 *    - Writing 3 students to "students.csv"
 *    - Reading them back
 *    - Displaying results
 * 5. Check file was created and contains correct data
 *
 * File format (students.csv):
 * ID,Name,Grade
 * 1001,Alice,A
 * 1002,Bob,B
 * 1003,Charlie,A
 *
 * BONUS (Optional):
 * - Add more fields (GPA, major)
 * - Implement CSV parsing with fgetc() or strtok()
 * - Add file error handling
 * - Append to existing CSV without overwriting
 * - Calculate statistics from CSV
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char grade;
} Student;

// TODO: Declare your functions here

int main() {
    // TODO: Write your solution here
    // 1. Create 3 students
    // 2. Write to CSV
    // 3. Read from CSV
    // 4. Display results

    return 0;
}

// TODO: Implement your functions here
