/*Force of attraction on a body of mass 'm'*/
#include <stdio.h>

float force(float a) ;

float force(float a){
    return a*9.8;
} ;



int main(){
    float m ;
    printf("Enter mass :");
    scanf("%f",&m);


    printf("The force is %.2f Newton",force(m));
    return 0;
}