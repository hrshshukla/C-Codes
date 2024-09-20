//  Why no "&" in string and character array
    string aur character array hai aur arrays ka naam apne aap hi unka base address (array[0]) denote karta hai.
    Aur inme value Automatic sequentially store hoti h 

    // Character Array or String :
    char str[100];
    scanf("%s", str); // To agar hum input kre : A aur B 
                      //  To A automatic str[0] me store hojayega 
                      //  Aur B automatic str[1] me store hojayega 
                      //  Lekin Integer array ya Float array me ye automatic nhi hota. 
                      //  Mannually krna padta hai.


    // Integer Or Float Array :
    int arr[5];
    scanf("%d", arr[i]); // Incorrect: This will cause an error
