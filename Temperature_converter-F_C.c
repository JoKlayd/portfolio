#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius; 
    int choice; 

    printf("Enter 1 for Fahrenheit to Celsius\nEnter 2 for Celsius to Fahrenheit\nSelection: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            printf("%.2f Fahrenheit is equivalent to %.2f Celsius\n", fahrenheit, celsius);
            break;

        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            printf("%.2f Celsius is equivalent to %.2f Fahrenheit\n", celsius, fahrenheit);
            break; 

        default:
            printf("Sike you got the wrong number\n");
            break;
    }
    return 0;
}
