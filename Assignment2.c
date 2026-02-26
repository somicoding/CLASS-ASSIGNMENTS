#include <stdio.h>


void addition();
void subtraction();
void multiplication();
void division();
void displayMenu();

int main() {
    int choice;
    char continueChoice;
    printf("     BASIC ARITHMETIC CALCULATOR\n");
    
    
    do {
        displayMenu();
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);
        
        while(getchar() != '\n');
        
        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
                break;
        }
        
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &continueChoice);
        
    } while(continueChoice == 'y' || continueChoice == 'Y');
    
    printf("\nThank you for using the calculator!\n");
    return 0;
}


void displayMenu() {
    printf("\n");
    
    printf("               MAIN MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}
void addition() {
    double num1, num2, result;
    
    printf("\nADDITION \n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    result = num1 + num2;
    printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
}


void subtraction() {
    double num1, num2, result;
    
    printf("\n SUBTRACTION\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    result = num1 - num2;
    printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
}


void multiplication() {
    double num1, num2, result;
    
    printf("\nMULTIPLICATION \n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    result = num1 * num2;
    printf("\nResult: %.2lf × %.2lf = %.2lf\n", num1, num2, result);
}


void division() {
    double num1, num2, result;
    
    printf("\n DIVISION \n");
    printf("Enter numerator: ");
    scanf("%lf", &num1);
    printf("Enter denominator: ");
    scanf("%lf", &num2);
    
    if(num2 == 0) {
        printf("\nError: Division by zero is not allowed!\n");
    } else {
        result = num1 / num2;
        printf("\nResult: %.2lf ÷ %.2lf = %.2lf\n", num1, num2, result);
    }
}