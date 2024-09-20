#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d",a, ++a, a++); // becoz three same variables(a) are in one line equation will move <----  (left to right )
/*  Logic : 4 5 5 
    Output : 6 6 4    **Both are true Logic as well as Output**
    
                                                                                                     */                                                                          
    return 0;
}