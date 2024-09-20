 #include <stdio.h>
// How to count the length of string 

#include <string.h> // step 1

int main(){
    char str[]="harsh";

    printf("The length of string is %d\n",strlen(str)); // strlen calculate the lenght of string 
                                                       // it doesnt count /0 in string 
        return 0;
}