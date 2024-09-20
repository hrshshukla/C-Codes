#include <stdio.h>

int main() {
///////Percentage Calculator

    int a, b, c;
    printf("Enter marks of subject 1\n");
    scanf("%d", &a);

    printf("Enter marks of subject 2\n");
    scanf("%d", &b);

    printf("Enter marks of subject 3\n");
    scanf("%d", &c);

    if (a < 33 || b < 33 || c < 33) {
        printf("Sorry, you have failed\n");
    }
    else {
        float total_marks = a + b + c;
        float percentage = (total_marks / 300) * 100;

        if (percentage >= 40) {
            printf("Congratulations, you have passed\n");
        }
        else {
            printf("Sorry, you have failed\n");
        }

        printf("You got %.2f percent\n", percentage);
    }

    return 0;
}
