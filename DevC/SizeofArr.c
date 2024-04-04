#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Array declaration and initialization
    int size = sizeof(arr) / sizeof(arr[0]); // Calculating the size of the array

    printf("Size of the array: %d\n", size); // Printing the size of the array

    return 0;
}

