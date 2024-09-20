#include <stdio.h>

int main(){
    int a;
    printf("Enter Number : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entered 1");
        break;
    
    case 2: 
            printf("you entered 2");
            break;
            
    default: printf("Not Matched");
        break;
    }
    return 0;
}