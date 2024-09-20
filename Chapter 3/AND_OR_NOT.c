#include <stdio.h>

int main(){
    //    AND OR NOT are called Logical operators
    //         AND (&&)
    //         OR  (||)
    //         NOT (!)



//AND (&&) join two things, So if you don't have two things you cant use and.  
        //*1    Applicable if you have 1 and 1       = True      : Means if you have two things Bike(1) as well as Car(1) both, then only you can say I have Bike AND Car 
        //*2    Not Applicable if you have 1 and 0   = False     : Means if you have one things Bike(1), then you will say I have Bike only. You cannot use (AND) bcoz it required two things. 
        //*3    Not Applicable if you have 0 and 0   = False     : Means if you have nothing, then you will say I have nothing. You cannot use (AND) bcoz it required two things. 

    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    

//OR (||) Give one option to choose betweem two things.  
        //*1    Applicable if you have 1  OR  1      = 1   : Means if you have two things Bike(1) as well as Car(1) both, then only you can say I have Bike AND Car 
        //*2    Not Applicable if you have 1  OR 0   = 1   : Means if you have one things Bike(1), then you will say I have Bike only. You cannot use (AND) bcoz it required two things. 
        //*3    Not Applicable if you have 0 OR 0    = 0   : Means if you have nothing, then you will say I have nothing. You cannot use (AND) bcoz it required two things. 
    printf("The value of a or b is %d\n", a||b);

//NOT (!) Change the value. Convert 0 -> 1 and 1 -> 0 .
         printf("The value of not(a) is %d\n", !a);

    return 0;
}