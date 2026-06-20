#include <stdio.h>

int main()
{
    int myNum = 10;
    int *ptr = &myNum;
    int **pptr = &ptr;

    **pptr = 20;

    printf("myNum: %d\n", myNum); // prints 20
}
