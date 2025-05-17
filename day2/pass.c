#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks of the subject:\n");
    scanf("%d", &marks);

    if (marks >= 35)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}