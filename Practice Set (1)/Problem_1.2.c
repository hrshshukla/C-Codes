#include <stdio.h>

int main(){
    float length;
    printf("Enter length\t");
    scanf("%f", &length); //In (scanf) We use (&)  to assign the value of (lenght) by number entered by user 
 
    int breadth;
    printf("Enter breadth\t");
    scanf("%d", &breadth);

    printf("Area of rectangle is %f", length*breadth);
    return 0;
}