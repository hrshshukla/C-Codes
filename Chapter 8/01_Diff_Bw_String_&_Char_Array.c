
Question : If we can use char array[] to store the value of character then why we use char string[]

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Character Array without Null-Terminator:
// Imagine karo ek array jismein 5 characters store ho sakte hain:

// Memory Layout:
+---+---+---+---+---+
| H | e | l | l | o |
+---+---+---+---+---+
Agar aap is array ko ek function ke saath use karte hain jo null-terminated string expect karta hai, to yeh function array ke baad bhi read kar sakta hai jab tak usse kahin memory mein ek \0 nahi mil jaata. Isse kabhi kabhi garbage data print ho sakta hai ya program crash ho sakta hai.


// 2. Properly Null-Terminated String:
// Null-terminated string mein ek extra character space hoti hai \0 ke liye:

// Memory Layout:
+---+---+---+---+---+----+
| H | e | l | l | o | \0 |
+---+---+---+---+---+----+
Strings mein null-terminator (\0) ka role bohot important hota hai, kyunki yeh string ke end ko mark karta hai.
Isse yeh hota hai ki functions, like printf with %s, sirf uss point tak hi read karte hain jahan tak data hai, aur uske aage nahi jaate.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Practical Code

#include <stdio.h>

int main() {
    char name1[5] = {'H', 'e', 'l', 'l', 'o'}; // No null-terminator
    char name2[6] = "Hello";                  // Null-terminated string

    printf("name1: %s\n", name1); // Undefined behavior, might print garbage or crash
    printf("name2: %s\n", name2); // Correct, stops at '\0'

    return 0;
}