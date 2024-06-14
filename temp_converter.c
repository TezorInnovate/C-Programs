#include<stdio.h>
int main() {
    int choice;
    double temp, convertedTemp; 
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fehrenheit\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        convertedTemp = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2lf\n", convertedTemp);    }
    else if(choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        convertedTemp = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2lf\n", convertedTemp);
    }
    else {
        printf("Invalid choice. Please select 1 or 2 for conversion.\n");
    }
    return 0;
}
