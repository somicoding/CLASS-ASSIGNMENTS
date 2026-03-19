#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0, passed = 1;
    float percentage;
    char grade[20];

    
    printf("Enter marks for 5 courses (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1;
        }
        
        
        if (marks[i] < 40) {
            passed = 0;
        }
        total += marks[i];
    }

   
    if (passed) {
        percentage = (float)total / 5;
        
        
        if (percentage >= 75) {
            printf("Distinction");
        } else if (percentage >= 60) {
            printf("First Division");
        } else if (percentage >= 50) {
            printf("Second Division");
        } else {
            printf("Third Division");
        }
        
        printf("\nRESULT: PASS\n");
        printf("Total Marks: %d/500\n", total);
        printf("Aggregate Percentage: %.2f%%\n", percentage);
        printf("Grade: %s\n", grade);
    } else {
        printf("RESULT: FAIL\n");
        printf("Reason: Student scored less than 40 in one or more courses\n");
        
        // Show failed courses
        printf("Failed in courses: ");
        for (i = 0; i < 5; i++) {
            if (marks[i] < 40) {
                printf("%d (%d marks) ", i + 1, marks[i]);
            }
        }
        printf("\n");
    }

   
    return 0;
}