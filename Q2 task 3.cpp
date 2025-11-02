#include <stdio.h>

int main() {
    int marks;
    int pass[10], fail[10];
    int passCount = 0, failCount = 0;
    int totalPass = 0, totalFail = 0;

    printf("Enter quiz marks for students (-1 to stop):\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student #%d: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[passCount] = marks;
            totalPass += marks;
            passCount++;
        } 
        else if (marks >= 0 && marks < 5) {
            fail[failCount] = marks;
            totalFail += marks;
            failCount++;
        } 
        else {
            printf("Invalid marks! Please enter marks between 0 and 10.\n");
        }
    }

    printf("\n--- Pass Students ---\n");
    if (passCount > 0) {
        for (int i = 0; i < passCount; i++)
            printf("Student #%d: %d\n", i + 1, pass[i]);
        printf("Average of pass students: %.2f\n", (float)totalPass / passCount);
    } else {
        printf("No passing marks entered.\n");
    }

    printf("\n--- Fail Students ---\n");
    if (failCount > 0) {
        for (int i = 0; i < failCount; i++)
            printf("Student #%d: %d\n", i + 1, fail[i]);
        printf("Average of fail students: %.2f\n", (float)totalFail / failCount);
    } else {
        printf("No failing marks entered.\n");
    }

    return 0;
}

