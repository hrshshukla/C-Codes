#include <stdio.h> 
                                                                                                 /*
6. Write a program to print the value of a variable i
    by using “pointer to pointer”                                                                                                   */


int main(){
    int i = 10;
    int* b = &i;
    int** c = &b;
    printf("Value of i is %d\n",**c);
    printf("Value of i is %d\n",**(&b));
  
    return 0;
}