#include <stdio.h>

int main() {
    int m1;
    char grade;

    printf("Enter marks of the subject:\n");
    scanf("%d", &m1);

    if (m1 >= 90)
        grade = 'A';
    else if (m1 >= 80)
        grade = 'B';
    else if (m1 >= 70)
        grade = 'C';
    else if (m1 >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade = %c\n", grade);

    return 0;
}