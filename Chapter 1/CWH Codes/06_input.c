#include<stdio.h>

int main(){
    int a; 
    scanf("%d", &a); // (scanf) let user to enter/input data 
    // (&) means assign the value to (a) entered by the user 
    // Also as we used "%d" hence user can only enter constant/ numbers
    
    printf("The value of a is %d",a);  // HERE (%d", a) means  %d = a 76
    return 0;
}