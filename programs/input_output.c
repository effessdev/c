#include <stdio.h>

int main()
{
    char name[20];
    int age;

    printf("Enter your name and age separated by a space: ");
    scanf("%19s %d", name, &age);

    printf("Hello %s, you are %d years old.\n", name, age);

    return 0;
}