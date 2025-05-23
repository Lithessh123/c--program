#include <stdio.h>

int sumOfdigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; 
        num /= 10;        
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    int result = sumOfdigits(number);
    printf(" %d\n", result);

    return 0;
}