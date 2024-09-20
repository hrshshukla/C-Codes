#include <stdio.h>

int main(){
   //  Factorial Number of 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 
   //  Factorial Number of 5! = 1 x 2 x 3 x 4 x 5 
   //  Factorial Number of 0! = 1  
   //  Factorial Number of 1! = 1  

int product = 1 ;
int n;
printf("Enter the number : ");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    product *=i; // Product will store the value                               product = product x 1    So product will become 1
}                                                                       //then, product = product x 2   So 1 x 2 = 2
 printf("Factorial Number of %d is %d", n, product);                    //then, product = product x 3   So 2 x 3 = 6                                                             
    return 0;                                                           //then, product = product x 4   So 6 x 4 = 24           
}                                                                       //then, product = product x 5   So 24 x 5 = 86.....n 
                                                                        // Final product