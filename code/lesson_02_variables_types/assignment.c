/*
 * ASSIGNMENT 2: Variables & Types
 *
 * Task: Temperature Converter
 * Write a program that converts temperature between Fahrenheit and Celsius
 *
 * Requirements:
 * 1. Declare variables for temperature in both Celsius and Fahrenheit
 * 2. Convert 32°F to Celsius: C = (F - 32) * 5/9
 * 3. Convert 0°C to Fahrenheit: F = C * 9/5 + 32
 * 4. Print results with proper labels
 * 5. Use float for precision
 *
 * Expected output:
 * 32°F = 0.0°C
 * 0°C = 32.0°F
 *
 * BONUS (Optional):
 * - Read user input instead of hardcoding values
 * - Add more temperature conversions
 * - Include Kelvin (K = C + 273.15)
 */

#include <stdio.h>

float convert_to_celsius(float farenheit){
    float celsius = (farenheit - 32.0) * 5/9;
    return celsius;
}

float convert_to_farenheit(float celsius){
    float farenheit = celsius * 9/5 + 32;
    return farenheit;
}

int main() {
    // TODO: Write your solution here
    float farenheit = 32.0;
    float celsius = 0.0;

    printf("%d°F = %.1f°C\n",(int)farenheit, convert_to_celsius(farenheit));
    printf("%d°C = %.1f°F\n",(int)celsius, convert_to_farenheit(celsius));

    printf("---\nConvert your own now!\nFarenheit: ");
    scanf("%f", &farenheit);
    printf("Celsius: ");
    scanf("%f", &celsius);
    printf("%.1f°F = %.1f°C\n", farenheit, convert_to_celsius(farenheit));
    printf("%.1f°C = %.1f°F\n", celsius, convert_to_farenheit(celsius));

    /*
    printf("%.1f farenheit is\n%.1f celsius after conversion\n---\n", farenheit, convert_to_c);
    printf("%.1f celsius is\n%.1f farenheit after conversion\n---\n",celsius, convert_to_f);
    */
    return 0;
}

