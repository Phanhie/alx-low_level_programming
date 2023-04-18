#include "main.h"

void print_binary(unsigned int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary_digits[32];
    int i = 0;
    while (n > 0) {
        binary_digits[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_digits[j]);
    }
}

