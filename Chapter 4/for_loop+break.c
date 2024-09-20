#include <stdio.h>

int main(){

      int n ;
    printf("Enter a number :");
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++)
    {
        if (i==10)
            {
            break;    // exit 
            continue; // skip this iteration and restart
            }
        printf("%d \n",i);
        
    }
    
    return 0;
}