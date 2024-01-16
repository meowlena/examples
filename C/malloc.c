#include <stdio.h>
#include <stdlib.h>


int main()
{
 
    // understanding the difference

    // that's static allocation, it's performed in compiler time

    char c; 
    int k; 
    int v[10]; 

    // while in stack allocation, that is performed at run time


    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n;
    
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
 
    return 0;
}