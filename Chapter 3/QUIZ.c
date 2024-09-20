#include <stdio.h>

int main(){
    int a;
    printf("Enter your marks :");
    scanf("%d", &a);

    if (a<=100 && a>=90)
    {
        printf("Excellent! You got Grade : A");
    }
    else if (a<=90 && a>=80)
    {
        printf("Very Good! You got Grade : B");
    }
    else if (a<=80 && a>=70)
    {
        printf("Good! You got Grade : C");
    }

    else
    {
        printf("Bro you're elon musk");
    }

    return 0;
}