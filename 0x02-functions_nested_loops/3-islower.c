#include "main.h"
/**
 * _islower - Entry point
 * @c : printed char
 * checks loweracase char
 *
 * return : 1 if c lowercase
 * and 0 if there is an error
 */

int _islower(int c)
{

	if (c >= 98 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}