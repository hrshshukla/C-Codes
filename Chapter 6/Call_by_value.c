#include <stdio.h>

//this call fuction cannot change the value of b and c 
int multiply(int a, int b){
    return a*b;
}

int main(){

int b;
printf("Enter :  ");
scanf("%d", &b);    

int c;
printf("Enter :  ");
scanf("%d", &c);


    printf("Multiplication of %d and %d is %d\n",b,c,multiply(b,c));
    return 0;
}