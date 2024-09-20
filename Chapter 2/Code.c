#include <stdio.h>

int main(){
//*1 learning : we can put two int of same value    
    int m = 10; 
    int l = m; 
    printf("Value of I is %d and J is %d \n",m, l);
   


//*2 learning : we can put multiple int of same line by using (,)
    int a = 2, b = 3, c = 4; 



// *3 learning : we can give one value to multiple integers like this 
    int a, b, c;
    int a = b = c = 30; 



//*4 learning : we can put equation as a value
    int k = 100;
    int i = 50; 
    int j = i;
    int X = k-(j+i); 
    printf("%d", X); 
    return 0;
}