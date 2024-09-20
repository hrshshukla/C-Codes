#include <stdio.h>

int main(){

    int a, b  = 0 ;
    printf("Enter Number : ");
    scanf("%d", &a);

    do
    {
        printf("%d \n",b);
        b++;
    } while (b<=a);
    
    return 0;
}