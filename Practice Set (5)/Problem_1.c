#include <stdio.h>

float average(int a, int b, int c){
    return (a+b+c)/3.0; // Instead of 3 we used 3.0 to get floating point number instead of integer 
} ;

int main(){
    int a ;
    printf("Enter Number One : ");
    scanf("%d",&a);

    int b;
    printf("Enter Number Two : ");
    scanf("%d",&b);

    int c;
    printf("Enter Number Three : ");
    scanf("%d",&c);


    printf("The average of %d, %d, %d, is %.2f",a,b,c,average(a, b, c));
    return 0;
}