#include <stdio.h>                                                                  /*
Write a program to change the value of a variable to 10 times of its current 
value.                                                                              */

void ten_times(int* );
void ten_times(int *x){// Step :2 --> Is line ka mtlb ye sirf pointer accept krege and bcoz *=& so &a will enter
    *x = *x * 10;     // Step :3 --> (*x) value of x = value of x * 10
}

int main(){
    int a;
    printf("Enter :  ");
    scanf("%d", &a);
    ten_times(&a);// Step :1 -->  (&a) ka address transfer kro 

    printf("The 10 times value of %d\n",a);
    return 0;
}