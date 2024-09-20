#include <stdio.h>
// Write a program to take string as an input from the user 
// Using %c and for print use %s confirm that the strings are equal.


int main(){





//_____________________________________________________________________________________________________________________________________________



// Taking Input of each individual elememnt--> h a r s h 
    char str[6];
    for (int  i = 0; i < 5; i++) // For str[0] to str[4]
    {
        scanf("%c", &str[i]); // Because we taking input of every element individually we will use "&"
        fflush(stdin);        // Jab ye code run hoga tab hum H ke baad ENTER press krege Aur ENTER bhi string me store hota hai aur uske liye hum FFLUSH use karte hai
                              // "C" consider "ENTER" button as element as solution we use this.
                              // fflush say flush the "ENTER" Button
    }
    
    str[5] = '\0';

    printf("%s\n",str);

    
//________________________________________________________________________________________________________________________________




  
//Taking Muliple Words Input :
    char str_2[10]; 
    gets(str_2); // Harsh :  ek string hai str_2 naam ki
               // gets():  Toh mai ky kru?
               // Harsh : Uska input lena hai tumhe 

    printf("%s\n",str_2); 


    return 0;
}