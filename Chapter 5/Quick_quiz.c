#include <stdio.h>
// Print Good Morning, Evening, Night in order 1->2->3


void good_morning(){                        // void = id                                            (id = void, integer, float, char)
    printf("Hello Sir, Good Morning!\n");   // good_morning = (ye phone number hai)      
};                                                 //  ()   = used to declare that this function is now available;                                       
void good_evening(){                                // {}  = used to directly implement action, like if you give it (printf) command and then if you use this function (printf) will come inbult with it                            
     printf("Hello Sir, Evening!\n");                                 
};                                                                  
void good_night(){                                        
     printf("Hello Sir, Good Night!\n");
};

int main(){

    good_morning();                     // () used to transfer values from here to function head 
    good_evening();
    good_night();

    return 0;
}