#include "main.h"
/**
 * _islower - Entry point
 * @c : printed char
 * checks loweracase char
 *
 * Return: if success 1
 * and 0 if there is an error
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
