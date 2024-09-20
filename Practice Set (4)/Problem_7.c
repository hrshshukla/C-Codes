
#include <stdio.h>

int main(){
   //  Factorial Number of 8! using WHILE LOOP
 

int product = 1 ;
int n;
printf("Enter the number : ");
scanf("%d", &n);

int i = 1;
while (i <= n)
{
     product *=i; 
     i++;
}
                                         
 printf("Factorial Number of %d is %d", n, product);                                                             
    return 0;          
}                      