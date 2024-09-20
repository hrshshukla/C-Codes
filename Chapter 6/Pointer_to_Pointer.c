#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a;
    int **c = &b;

    printf("The value of i is %d\n",a);
    printf("The value of i is %d\n",*b);

    printf("The value of i is %d\n",*(&b)); // (1)-->*/&    (2)--> remaining b = &a   (3)print address of a
    return 0;
}