#include <stdio.h>                                                                  /*
* Write a program using a function 
* which calculates the sum and average of two numbers.
* Use pointers and print the values of sum and average in main().                     
* Also print the address of AVG and SUM */ 

int* sum(int a, int b);
int* sum(int a, int b){
    int sum = a+b;
    int* ptr1 = &sum;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    return ptr1;
}

float* average(int a, int b);
float* average(int a, int b){
    float avg = (a+b)/2;
    float* ptr2 = &avg;
    printf("Avg of %d and %d is %.2f\n",a,b,avg);
    return ptr2;
    
}

int main(){
    int a;
    printf("Enter first number:  ");
    scanf("%d", &a);


    int b;
    printf("Enter Second Number :  ");
    scanf("%d", &b);

    int* ptr1=sum(a,b);
    float* ptr2=average(a,b);


    printf("The address of SUM is %p and Address of Average is %p\n",ptr1, ptr2);

    return 0;
}