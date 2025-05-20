#include <stdio.h>

int main() {
    int input[] = {1, 2, 3, 4, 5};
    int output[5];
    int i;

    // Step 1: Calculate output[i] = 15 - input[i]
    for(i = 0; i < 5; i++) {
        output[i] = 15 - input[i];
    }

    // Step 2: Calculate sum of output array
    int sum = 0;
    for(i = 0; i < 5; i++) {
        sum += output[i];
    }

    // Print the output array
    printf("Output Array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", output[i]);
    }

    // Print the sum
    printf("\nSum of Output Array: %d\n", sum);

    return 0;
}

