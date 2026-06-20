#include <stdio.h>

int main()
{
    int numbers[4] = {10, 20, 30, 40}; // Unlike many other languages, we use {} instead of [] in C

    printf("Memory address of the array: %p\n", numbers);
    printf("Memory address of the first element: %p\n", &numbers[0]);
    printf("Both are same.\n\n");

    printf("Insidrectly accessing the first element of the array using the memory address of the array: %d\n\n", *numbers);

    int *ptr = numbers; // The star makes it a pointer. This holds the memory location of the array (or the first element of the array).

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr + i)); // Prints all elements of the array.
    }

    // Internally:
    // - ptr + 1 → address + sizeof(int)
    // - ptr + 2 → address + 2 * sizeof(int)
    // - ptr + 3 → address + 3 * sizeof(int)

    // This is known as pointer arithmetic. It was only possible in this case because arrays in C are contiguous in memory.

    return 0;
}
