#include <stdio.h>
                                                                                                                                                                                                         /*
 fibonacci series =  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...  
                     0+1=1  (3+5)=8  (5+8)=13  (8+13)=21

 Formula : fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
                                                                                                                                                                                                        */

int fibonacci(int a);
int fibonacci(int a){
    if (a==1 || a==2)
    {
        return a-1; //isse jab koi 1 enter krega to uska fabonacci 0 hojayega jo ki true h, same as (2)
    }
    return fibonacci(a-1) + fibonacci(a-2);
}

int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);

    printf("Value of fibonacci series at %d is %d",a, fibonacci(a));
    return 0;
}