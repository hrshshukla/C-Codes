#include <stdio.h>
// Take input in string of value having space in them 
//             Ex: Harsh Shukla 
// Also called multi-word string.


int main(){
    char str[10];
     gets(str); // Multi Word string input
                // This take input from user as scanf command do 

    puts(str); // it prints string + move the cursor in next line

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Situation 1 :
    printf("hello 1\n");              
    printf("hello 2\n");       // Output : hello 1hello 2


// Situation 2 :
    printf("hello 1\n");  
    puts(str);            
    printf("hello 2\n");        /* Output : hello 1
                                            abcd                    
                                            hello 2                                                                                                 */                                                  

    return 0;
}