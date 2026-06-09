#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Writing to a file
    printf("=== Writing to File ===\n");
    FILE *file = fopen("test.txt", "w");  // "w" = write mode

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Line 1: Hello, File!\n");
    fprintf(file, "Line 2: C File I/O\n");
    fprintf(file, "Line 3: This is a test\n");
    fclose(file);
    printf("Wrote to test.txt\n");

    // Reading from a file
    printf("\n=== Reading from File ===\n");
    file = fopen("test.txt", "r");  // "r" = read mode

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    // Append to file
    printf("\n=== Appending to File ===\n");
    file = fopen("test.txt", "a");  // "a" = append mode

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Line 4: Appended text\n");
    fclose(file);
    printf("Appended to test.txt\n");

    // Read and display entire file
    printf("\n=== Final File Contents ===\n");
    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    // Binary file I/O
    printf("\n=== Binary File I/O ===\n");
    int numbers[] = {10, 20, 30, 40, 50};
    file = fopen("numbers.bin", "wb");  // "wb" = write binary

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fwrite(numbers, sizeof(int), 5, file);  // Write 5 ints
    fclose(file);
    printf("Wrote binary data to numbers.bin\n");

    // Read binary file
    int read_numbers[5];
    file = fopen("numbers.bin", "rb");  // "rb" = read binary

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fread(read_numbers, sizeof(int), 5, file);
    fclose(file);

    printf("Read from binary file: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\n");

    // File positioning
    printf("\n=== File Positioning ===\n");
    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);  // Seek to end
    long file_size = ftell(file);  // Get current position (file size)
    printf("File size: %ld bytes\n", file_size);

    rewind(file);  // Go back to beginning
    char first_char = fgetc(file);  // Read first character
    printf("First character: %c\n", first_char);

    fclose(file);

    // Character by character read
    printf("\n=== Character-by-Character Read ===\n");
    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("First 20 characters: ");
    for (int i = 0; i < 20; i++) {
        char c = fgetc(file);
        if (c == EOF) break;
        printf("%c", c);
    }
    printf("\n");

    fclose(file);

    // Important file modes
    printf("\n=== File Modes ===\n");
    printf("\"r\"  - Read (file must exist)\n");
    printf("\"w\"  - Write (creates/overwrites)\n");
    printf("\"a\"  - Append (creates if doesn't exist)\n");
    printf("\"r+\" - Read/Write\n");
    printf("\"w+\" - Write/Read (overwrites)\n");
    printf("\"a+\" - Append/Read\n");
    printf("Add 'b' for binary: \"rb\", \"wb\", etc\n");

    return 0;
}
