                                                                                                                                                /*
Celsius to farenhite                                                                                                                                                                                                                                                                                   */

#include <stdio.h>

float c2f(float a){
    return (a*1.8)+32;
}
int main(){
    float a;
    printf("Enter Celsius:  "); 
    scanf("%f",&a);


    printf("%.2f Fahrenhite",c2f(a));
    return 0;
}