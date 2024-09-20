#include <stdio.h>

int main() {
// Sequence control instructions
// Decision Control Instructions


// Sequence control instructions:
    int a = 5;
    float b = 3.14;
    char c = 'A';

    printf("Value of a: %d\n", a);
    printf("Value of b: %f\n", b);
    printf("Value of c: %c\n", c);



//Decision Control Instructions : if, else
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    } else if (x == 0) {
        printf("x is zero.\n");
    } else {
        printf("x is negative.\n");
    }


// 3. Loop Control Instructions : For loop, While loop

    int i;

    for (i = 1; i <= 5; ++i) {
        printf("Iteration %d\n", i);
    }


// 4. Case Control Instructions : Choice, switch and case
    
    int choice = 2;

    switch(choice) {
        case 1:
            printf("You chose option 1.\n");
            break;
        case 2:
            printf("You chose option 2.\n");
            break;
        case 3:
            printf("You chose option 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

}