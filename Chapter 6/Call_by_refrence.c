#include <stdio.h>


//This Refrence fuction can change the value of b and c 
    
    int multiply(int *, int *); 

    int multiply(int *a, int *b){
    *a=6; //Go Inside a and make it equal to 6
    return (*a**b);
    }

    int main(){

    int b;
    printf("Enter :  ");
    scanf("%d", &b);    

    int c;
    printf("Enter :  ");
    scanf("%d", &c);


    printf("Multiplication of %d and %d is %d\n",b,c,multiply(&b,&c));
    return 0;
    }