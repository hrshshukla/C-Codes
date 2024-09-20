#include <stdio.h>

// Function to fill the array with consecutive multiplication table
void fill_array_with_table(int arr[], int n) {
    for (int i = 0; i < 10; i++) {
        arr[i] = n * i; // Filling the array with positive numbers starting from 1
    }
}

int main() {
    int x;
    printf("Enter the number of positive integers you want in the array: ");
    scanf("%d", &x);

    if (x > 0) {
        int arr[x]; // Variable length array (C99 standard and later)
        fill_array_with_table(arr, x);

        // Print the array to verify
        printf("The array is: ");
        for (int i = 0; i < x; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("The number of elements must be positive.\n");
    }

    return 0;
}
