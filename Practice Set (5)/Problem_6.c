
// #print first 10 natural number using recursion

#include <stdio.h>
int natural(int x);

int total = 0;
int natural(int x){
 
   if (x==1){
    return 1;
   } 
   else
   {
     for(int b = 1; b <=x; b++)
    {
     total += b;
    }
   }
   return total; 
}


int main(){
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);

    printf("total of first %d is %d",a,natural(a));
    return 0;
}