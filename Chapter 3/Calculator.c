#include <stdio.h>

int main() {
    int number_1, number_2;
    char operator;

    printf("Enter Number 1 : \t");
    scanf("%d", &number_1);

    printf("Enter Operator : + -  *  / %% \n ");
    scanf(" %c", &operator);  // Add a space before %c to consume any newline

    printf("Enter Number 2 : \t");
    scanf("%d", &number_2);

    if (operator == '+' || operator == '-' || operator == '/' || operator == '*' || operator == '%') {
        if(operator == '+') {
            printf("Sum of %d + %d is %d\n", number_1, number_2, number_1 + number_2);

        } else if(operator == '-') {
            printf("Difference of %d - %d is %d\n", number_1, number_2, number_1 - number_2);
            
        } else if(operator == '*') {
            printf("Product of %d * %d is %d\n", number_1, number_2, number_1 * number_2);
        } else if(operator == '/') {
            if(number_2 != 0) {
                printf("Quotient of %d / %d is %d\n", number_1, number_2, number_1 / number_2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else if(operator == '%') {
            if(number_2 != 0) {
                printf("Remainder of %d %% %d is %d\n", number_1, number_2, number_1 % number_2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        }
    } else {
        printf("Invalid operator entered.\n");
    }

    return 0;
}
