#include <stdio.h>

                                                                                                                                                                                                                                /*
     Factorial(5) = 1 X 2 X 3 X 4 X 5           
     Factorial(4) = 1 X 2 X 3 X 4                                                
     Factorial(3) = 1 X 2 X 3                                              
     Factorial(2) = 1 X 2    
                                                                          
            Factorial(5) =  Factorial(4) X 5                                                                                                                                                                          
Hence       Factorial(n) =   Factorial(n-1) x n

////////////////////////////////////////////////////////////////////////////////////////////////////////

Now         Factorial(n) =   Factorial(n-1) x n 
                                       ^
                                       |
                                       To find this (n) : Factorial(n) =   Factorial(n-1) x n  .....  will apply and this process will repeat and n become negative infinity
                                       To solve this we will use ( IF-ELSE )  
                                                                                                       */                   
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                                                                 */

int factorial(int n){
    if (n==0 || n==1) // Base condition is compulsary to stop function
    {
        return 1;       // bcoz factorial of 1 = 1 and 0 = 1
    }
    
    return factorial(n-1)* n;
}
 

int main()
{
    int a ;
    printf("Enter Number :  ");
    scanf("%d",&a);

    printf("The factorial of %d is %d\n",a,factorial(a));
    return 0;
}