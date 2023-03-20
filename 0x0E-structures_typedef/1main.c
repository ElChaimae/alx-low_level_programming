#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    char str[10];

    *str = '\0';
    init_dog(&my_dog, str, 3.5, "Bob");
    printf("My name is %s, and I am %.1f and my owner is %s :) - Woof!\n", my_dog.name, my_dog.age, my_dog.owner);
    return (0);
}
