#include <stdio.h>

int main(){
//////////Income tax (okay)
///////     ***printf("total %.3f", tax);***  ( %.3f ) indicates that you want to print the floating number  with three decimal places. 

    float tax;
    int income;
    printf("How much do you earn : ");
    scanf("%d", &income);

    if (income<=250000)
    {
        tax = 0;
    }
    else if (income>=250000 && income<=500000)
    {
        tax = 0.05 * (income-250000);
    }  
    else if (income>=500000 && income<=1000000)
    {
        tax = 0.05 * (500000-250000) + 0.2 * (income-1000000);
    } 
    else if (income>=1000000)
    {
        tax = 0.05 * (500000-250000) + 0.2 * (500000-1000000)  + 0.3 * (income-1000000);
    }  

    printf("Income tax is %.1f",tax);

    return 0;


}