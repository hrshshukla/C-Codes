#include <stdio.h>
// Create a string using and print its each content using a loop

int main(){
  char str[] = {'a','b','c','d','\0'}; // both are same 
 // int str[] = {"abcd"}; Automatic Null (\0) when using "" 

    for (int i = 0; i < 4; i++)
    {
        printf("The Character Store in str[%d] is %c\n",i,str[i]);
    }       
    
    return 0;
 }                                                                                                                                                                                          /*

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Output :
                                
The Character Store in str[0] is a
The Character Store in str[1] is b
The Character Store in str[2] is c
The Character Store in str[3] is d                                                                                                                                                              */