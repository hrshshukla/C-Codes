#include <stdio.h>
// Taking Input in String
// LEARNING : Dont use of & in string scanf command 
//            scanf("%s", &str); incorrect
//            scanf("%s",  str); correct


int main(){

    char str[4]; // 3 chararcter + (\0) = 4 characters
    printf("Enter :\n");
    scanf("%s", str); // We dont use & in string and character array for detail (10_Doubt.c)

 
    printf("the whole string is %s\n",str);
   
    return 0;
}