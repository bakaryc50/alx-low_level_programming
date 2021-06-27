#include "holberton.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
     int sum;
     int i;

    for (i = 3; i < 1024; i++)
    {
            if ((i % 3 == 0) || (i % 5 == 0))
            {
                     sum = sum + i;
            }
    }
    printf("%d", sum);
    printf("\n");
    return (0);
}
