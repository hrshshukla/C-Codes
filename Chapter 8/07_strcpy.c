#include <stdio.h>
// STRCPY is used to change target with source 

#include <string.h>

int main(){
    char src[]= "Harsh"; // This source string (source = value ka starting point) 

    char target[6]; // This is target string 
                    // (HARSH + \0) = 6 Bytes give enough storage to target file so that source can fit inside

    strcpy(target,src);

    printf("%s %s", src, target);
    return 0;
}
