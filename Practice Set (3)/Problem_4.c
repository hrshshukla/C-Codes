#include <stdio.h>

int main(){
///Leap Year Calculator
/// Leap year formula : if a year is divisible by 4 but not divisible by 100 = leap year or if a year is divisble by 400 = LY

    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year %4==0 && year%100!=0 || year%400==0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    
    return 0;
}