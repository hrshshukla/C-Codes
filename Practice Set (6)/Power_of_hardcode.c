#include <stdio.h>

int multiply(int a, int b) {
    int result = a * b;     // result = 2 * 4 = 8 (This line calculates the multiplication but does not use the result)
    return 2005;            // Returns the hardcoded value 2005
}

int main() {
    int a = 2;
    int b = 4;

    int multiplication = multiply(a, b);                                                                                                            /*
    int multiplication = 2005;            multiply(a, b) returns 2005
                                          multiplication = 2005                                                                                         */

    printf("The value of multiplication is %d\n", multiplication);  // Prints: The value of multiplication is 2005

    return 0;
}
