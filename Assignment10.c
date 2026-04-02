#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    int i, num, fact = 1;
    
    printf("\n SIMPLE CALCULATOR \n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("7. Exit\n");
  
    
    while(1) {
        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 2: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 3: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
                
            case 5: 
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 6: 
                printf("Enter a positive integer: ");
                scanf("%d", &num);
                if(num < 0) {
                    printf("Error! Factorial of negative number doesn't exist.\n");
                } else {
                    fact = 1;
                    for(i = 1; i <= num; i++) {
                        fact *= i;
                    }
                    printf("%d! = %d\n", num, fact);
                }
                break;
                
            case 7: 
                printf("Thank you for using calculator. Goodbye!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please enter 1-7.\n");
        }
    }
    return 0;
}