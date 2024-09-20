#include <stdio.h>
// STRLEN() is used to find length of a string
// Que : Make a function which can calculate the length of string as STRLEN do.
// UNSOLVED



int my_strlen(char str[]){
    int count; // To count length 

    int i=0;
    char c = str[i]; 
    while(c!='\0'){  // Step 2 : Value check hogi, If : ( H = \0 ) ( a = \0 ) ( r = \0 )... aur string ke last me \0 toh ayega hi aur jaise hi C = /0 hoga loop end hoga q ki C equal nhi hona chiye (FALSE) 
        c = str[i];  // Step 1 : String ki sari value ek ek baar "c" me aygi (c = H)  hoga phir (c = a) hoga.... phir
        i++;         // Step 3 : Ab Harsh me 5 letter + \0 = 6 letter hai , Hence loop 5 baar chala lekin i = 6 hoga (doubt.c) 
          
    }
     
    count = i-1;     //i-1  Qki string me bhi hoga aur /0 ko calculate nhi krna hai 
    return count;
 
}
int main(){
    char str[] = "Harsh";
    
    printf("%d", my_strlen(str));
    return 0;
}