#include <stdio.h>                                                                  /*
CALL BY VALUE : Write a program to change the value of a variable to 10 times of its current 
value.                                                                       */

int ten_times(int); 
int ten_times(int x){// Step :2 --> Is line ka mtlb ye sirf pointer accept krege and bcoz *=& so &a will enter
    return x * 10;     // Step :3 --> (*x) value of x = value of x * 10
}

int main(){
    int a;
    printf("Enter :  ");
    scanf("%d", &a); 

    printf("The 10 times value of %d\n",ten_times(a));
    return 0;
}