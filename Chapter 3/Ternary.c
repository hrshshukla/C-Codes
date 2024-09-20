#include <stdio.h>

int main(){
// Shortcut of IF and ELSE
    
    int a;;
    printf("Enter Number One :");
    scanf("%d", &a);

    int b;
    printf("Enter Number Two :");
    scanf("%d", &b);

    a>b?printf("a is greater than b"):printf("b is greater than a");
    return 0;
}