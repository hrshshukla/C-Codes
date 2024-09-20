#include <stdio.h>

int main()
{
    int a = 0;
    while (a <= 20)//code chalega agar jab tak (a>= 20) nhi hojata
    {
        if (a >= 10) // IF bola code tabhi chalega jab (a < 10) hoga, toh code aage chal agya
        {
            printf("The Value of a is %d \n", a);
        }
        a++;// Ye bole thik hai (a) ki value badaho aur code waps chalao
    }

    return 0;
}