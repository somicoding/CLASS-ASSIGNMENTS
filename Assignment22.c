#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;
    
    while(1) {
        printf("\n STRING OPERATIONS MENU \n");
        printf("1. Calculate String Length (strlen)\n");
        printf("2. Copy String (strcpy)\n");
        printf("3. Concatenate Strings (strcat)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Reverse String (strrev)\n");
        printf("6. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        switch(choice) {
            case 1: 
                printf("\n--- STRING LENGTH (strlen) ---\n");
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of \"%s\" = %lu\n", str1, strlen(str1));
                break;
                
            case 2: 
                printf("\n--- STRING COPY (strcpy) ---\n");
                printf("Enter source string: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcpy(str1, str2);
                printf("Source: \"%s\"\n", str2);
                printf("Destination after strcpy: \"%s\"\n", str1);
                break;
                
            case 3: 
                printf("\n--- STRING CONCATENATION (strcat) ---\n");
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str1, str2);
                printf("After concatenation: \"%s\"\n", str1);
                break;
                
            case 4: 
                printf("\n--- STRING COMPARISON (strcmp) ---\n");
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                int result = strcmp(str1, str2);
                if(result == 0)
                    printf("\"%s\" and \"%s\" are EQUAL\n", str1, str2);
                else if(result < 0)
                    printf("\"%s\" is LESS than \"%s\"\n", str1, str2);
                else
                    printf("\"%s\" is GREATER than \"%s\"\n", str1, str2);
                break;
                
            case 5: 
                printf("\n--- STRING REVERSE (strrev) ---\n");
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(temp, str1);  
                strrev(str1);      
                printf("Original: \"%s\"\n", temp);
                printf("Reversed: \"%s\"\n", str1);
                break;
                
            case 6: 
                printf("\nExiting program. Goodbye!\n");
                exit(0);
                
            default:
                printf("\nInvalid choice! Please enter 1-6.\n");
        }
    }
    
    return 0;
}