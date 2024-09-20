

    // POINTER ARITHMETIC USING INTEGER POINTER (4 bytes)
     int a = 5;
     int *ptr = &a; 
     printf("The address of a is %u\n", &a);        Output=12996
     printf("The address of a is %u\n", ptr);       Output=12996
     ptr++;
     printf("The value of ptr is %u\n", ptr)        Output=12300 //(12996 + 4 bytes)



//////////////////////////////////////////////////////////////////////////////////////////////////


    // POINTER ARITHMETIC USING CHARACTER POINTER (1 byte)
     char a = 'A';
     char *ptr = &a; 
     printf("The address of a is %u\n", &a);        Output=12996
     printf("The address of a is %u\n", ptr);       Output=12996
     ptr++;
     printf("The value of ptr is %u\n", ptr)        Output=123997 //(12996 + 1 bytes)


////////////////////////////////////////////////////////////////////////////////////////////////////



    // POINTER ARITHMETIC USING FLOAT POINTER (4 bytes)
     float a = 5.2;
     float *ptr = &a; 
     printf("The address of a is %u\n", &a);        Output=12996
     printf("The address of a is %u\n", ptr);       Output=12996
     ptr++;
     printf("The value of ptr is %u\n", ptr)        Output=12300 //(12996 + 4 bytes)


