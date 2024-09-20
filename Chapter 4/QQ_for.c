#include <stdio.h>

int main(){
// Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop by taking input from user 
 
    int a;
    printf("Enter Number : ");
    scanf("%d", &a);
 

           // BAD CODE                                                                          // GOOD CODE
    for ( int i = 0 ; i <= a; i++)//                                        OR     for ( int i = 1 ; i <= a; i++)                                                                                                                                
                                                                            //               {                       
               {                                                            //                 printf("%d", i);  
                  if (i>=1) {                                               //                  i++;                 
                             printf("%d \n", i);                            //               }                                                
                            }                                                                                                                
                //  i--;    LOL! VS Code Crash hogya  😂😂                                                                                                                                            
                }
    return 0;
}