#include <stdio.h>
// Create a three–dimensional array And 
// print the address of its elements in increasing order.
// New way to use loops 

int main(){
    int arr[2][3][4];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("Value of address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}