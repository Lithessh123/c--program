#include <stdio.h>           

int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int base, exponent;
    scanf("%d %d", &base,&exponent);
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}