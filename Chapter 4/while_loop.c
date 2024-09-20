#include <stdio.h>

int main(){
    int a = 0 ;
    while (a<100) // bcoz 100<100 is false, WHILE wants true                           DETAIL-->                                                                        it will print till 99 because after that 99th in loop (a) will become 100 and when while check (100 <100) condition show FALSE. 
    {
        printf("%d is smaller than 100 \n", a);
        a++; // means a = a + 1;
        
    }

    return 0;
}


//Infinity loop 

#include <stdio.h>

int main(){
    int a = 0 ;
    while (a<100)  
    {
        printf("%d is smaller than 100 \n", a);
        a = 0 ; //We make (a = 0) which will give always TRUE result and will run agin n again.
        
    }

    return 0;
}

//Infinity loop 2.0

#include <stdio.h>

int main(){
    int a = 0 ;
    while (2<100)  //We wrote a universal TRUTH that (2<100) which will give TRUE result always.
    {
        printf("%d is smaller than 100 \n", a);
        a++ ; // Value of two will always increse but look upside for a sec
        
    }

    return 0;
}




