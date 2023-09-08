#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char start = 'a';
    char end = 'z';

    while (start <= end)
    {
        putchar(start);
        start++;
    }
    putchar('\n');

    return (0);
}
