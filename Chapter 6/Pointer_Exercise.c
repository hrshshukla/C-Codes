#include <stdio.h>

int main(){

    int x = 17;
    int *y = &x;
    
    printf("Address of x is %p\n",y);
    printf("Address of x is %p\n",&x);

    printf("\n");

    printf("Address of x is %u\n",&x);
    printf("Address of x is %u\n",y);

    printf("Value of x is %d\n",x);
    printf("Value of x is %d\n",*y);
    printf("Value of x is %d\n",*(&x)); // means print value of x  (For More Details)----->                                                             (&x)= go to address of x and (*) = Enter inside the X and bcoz x=17 it will print value of x 
    

    printf("Address of Y is %p\n",&y);
    printf("Address of Y is %u\n",&y);
    printf("Value of y is %d\n",*(&y));// means print value of y (For More Details)----->                                                              (&y)= go to address of y and (*) = Enter inside the Y and bcoz *y=&x it will print address of x 

    return 0;
}   