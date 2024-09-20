#include <stdio.h>

int main(){
    //Write a program to sum first ten natural numbers using Do-while loop.

    int a ;
    printf("Enter :     ");
    scanf("%d", &a);

    int b = 1;
    int sum = 0;
    do
    {
       sum += b; // here (sum) stores the value  
       b++;                                             //then, sum = sum + 1    So 0 + 1 = 1 
     } while (b<=a);                                    //then, sum = sum + 2    So 1 + 2 = 2
                                                        //then, sum = sum + 3    So 2 + 3 = 5 
                                                        //then, sum = sum + 4    So 5 + 4 = 9
                                                        //then, sum = sum + 5    So 9 + 5 = 14.....n      
                                                        // Final sum                                                                   
    

    printf("Sum of first %d natural is %d",a,sum);
    
    return 0;
}