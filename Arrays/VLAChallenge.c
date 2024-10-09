//create a program that reads elements in an array and finds the sum of the array elemts

#include <stdio.h>

int sum(int arr[], int size){
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res += arr[i];
        printf("rolling sum: %d, index: %d", res, i);
    }

    return res;
    
}

int main(){

    int size;

    //ask user for size of the array
    printf("Enter the number of elements in array");
    scanf("%d", &size);

    // Dynamically allocate memory for the variable-length array
    int array[size];

    // Ask user to input elements in the array

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    

    // Call the sum function
    int result = sum(array, size);  // Pass the array and its size to the sum function
    printf("Total sum: %d\n", result);

    return 0;
}