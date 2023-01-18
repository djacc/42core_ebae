#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("Before: x = %d, y = %d\n", x, y);

    x = x ^ y;  // x now contains the result of the XOR operation between x and y
	printf("1. operation x = %d, y = %d\n", x, y);
    y = x ^ y;  // y now contains the result of the XOR operation between x and y
	printf("2. operation x = %d, y = %d\n", x, y);
    x = x ^ y;  // x now contains the result of the XOR operation between x and y

    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}