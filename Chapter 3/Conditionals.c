#include <stdio.h>

int main(){
    int a;

    printf("Enter your age :");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("Congratulation!");
        printf("Your age is divisible by 5");
    }

    else
    {
        printf("LOL you born on wrong time \t");
        printf("HAAA..HAA..HA !!");
    }
    
    printf("");
    return 0;
}