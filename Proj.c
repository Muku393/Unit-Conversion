#include <stdio.h>

// Function prototypes
void convertTemperature();
void convertLength();
void convertWeight();

int main() {
    int choice;
    while (1) {
        printf("\nScientific Calculator for Unit Conversion\n");
        printf("1. Temperature Conversion\n");
        printf("2. Length Conversion\n");
        printf("3. Weight Conversion\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertTemperature();
                break;
            case 2:
                convertLength();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void convertTemperature() {
    double temp;
    int option;
    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    printf("Enter the temperature value: ");
    scanf("%lf", &temp);

    if (option == 1)
        printf("Result: %.2lf Fahrenheit\n", (temp * 9/5) + 32);
    else if (option == 2)
        printf("Result: %.2lf Celsius\n", (temp - 32) * 5/9);
    else if (option == 3)
        printf("Result: %.2lf Kelvin\n", temp + 273.15);
    else
        printf("Invalid option.\n");
}

void convertLength() {
    double length;
    int option;
    printf("\nLength Conversion:\n");
    printf("1. Meters to Inches\n");
    printf("2. Meters to Feet\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    printf("Enter the length value: ");
    scanf("%lf", &length);

    if (option == 1)
        printf("Result: %.2lf Inches\n", length * 39.37);
    else if (option == 2)
        printf("Result: %.2lf Feet\n", length * 3.281);
    else
        printf("Invalid option.\n");
}

void convertWeight() {
    double weight;
    int option;
    printf("\nWeight Conversion:\n");
    printf("1. Kilograms to Pounds\n");
    printf("Enter your option: ");
    scanf("%d", &option);
    printf("Enter the weight value: ");
    scanf("%lf", &weight);

    if (option == 1)
        printf("Result: %.2lf Pounds\n", weight * 2.205);
    else
        printf("Invalid option.\n");
}
