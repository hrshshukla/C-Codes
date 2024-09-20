#include <stdio.h>

int main(){
    int a, b, c;
        printf("Enter Side 1 :");
            scanf("%d", &a);
        
        printf("Enter Side 2 :");
            scanf("%d", &b);

        printf("Enter Side 3 :");
            scanf("%d", &c);

    
    int A = a*b*c;

    printf("Area of triangle %d", A);
    return 0;
}