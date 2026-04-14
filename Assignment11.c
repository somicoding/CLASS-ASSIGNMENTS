#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j, fact = 1, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }
    
    printf("\n RESULTS \n");
    
    
    printf("Square root: %.2lf\n", sqrt(num));
    
    
    printf("Square: %d\n", num * num);
    
    
    printf("Cube: %d\n", num * num * num);
    
    
    if(num <= 1) isPrime = 0;
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("Prime: %s\n", isPrime ? "Yes" : "No");
    
   
    if(num == 0) fact = 1;
    else {
        for(i = 1; i <= num; i++)
            fact *= i;
    }
    printf("Factorial: %d\n", fact);
    
   
    printf("Prime factors: ");
    int n = num;
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
 
    
    return 0;
}