#include <stdio.h>
// Pointer can change there values but Strings Cannot 

int main(){
    char *ptr = 'h';  // This is a Pointer string i can change 'h' to 'j'
    printf("%c\n",*ptr);


    char string[]='h';  // This is a and we cannot change its value 
    


    return 0;
}