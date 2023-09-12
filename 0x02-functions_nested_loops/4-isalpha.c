#include "main.h"
/**
 * _islower - Entry point
 * @c : printed char
 * checks for alphabetic char
 *
 * Return: if success 1
 * and 0 if there is an error
 */

int _islower(int c)
{

    if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
