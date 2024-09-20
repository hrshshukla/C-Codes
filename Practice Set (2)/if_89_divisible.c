#include <stdio.h>

int main(){
// Find out if the number is divisible by 89 or not
    int a;
    printf("Enter a Number  :\t");
    scanf("%d", &a);

    int b = a % 89;

    if (b==0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}