#include <stdio.h>

int main(){
//*1 {} are not required when there is one command inside IF ELSE 
//*2 Find Out Error??

    int a = 20;
    if (a=30) 
    printf("I am 30");

    else
        printf("I am nothing");








/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Answer

    int a = 20;
    if (a=30) ////// Here (a=b)WRONG  (a==b)RIGHT
    printf("I am 30");

    else
        printf("I am nothing");

    return 0;
}