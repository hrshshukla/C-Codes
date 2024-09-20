#include <stdio.h>

int main(){
    float p, r, t;
        printf("Enter Principle Amount \n");
        scanf("%f", &p);

        printf("Enter Interest Rate \n");
        scanf("%f", &r);

        printf("Enter Time \n");
        scanf("%f", &t);

    printf("Simple Interest is equals to %f", (p*r*t)/100);
    return 0;
}