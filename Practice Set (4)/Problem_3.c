#include <stdio.h>

int main(){
//Write a program to sum first ten natural numbers using while loop.

    int sum = 0;
    int a ;
    int i = 1;
    printf("Enter :    ");
    scanf("%d", &a);

    
    while (i<a)
    {
      sum += i;   // First iteration sum = sum +1, So sum will become 1
      i++;        // Second iteration sum = sum +2, So sum will become 3
                  // Three iteration sum = sum +3, So sum will become 6
    }

printf("Value of first %d natural numbers is %d\n", a, sum);

return 0;
}