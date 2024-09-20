
//Pro Version :  #print first 10 natural number using recursion

#include <stdio.h>
int natural(int x);

int natural(int x){
 
   if (x==1){
    return 1;
   } 
   
   else
   {
   return natural(x-1)+ x;
    }
}


int main(){
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);

    printf("total of first %d is %d",a,natural(a));
    return 0;
}