#include <stdio.h>
// STRCAT is used to join two string together

#include <string.h>

int main(){
    char str_1[]= "Hello ";
    char str_2[]= "Harsh";
    
    strcat(str_1, str_2); // Join string 1 and string 2

    printf("The Value of string is %s\n",str_1);    //  Output : Hello Hasrh

    printf("The Value of string is %s\n",str_2);    //  Output : Hello  
                                                    //  because str_1 gya hai str_2 ke pass 
                                                    // str_2 apni hi place par hai

    return 0;
}