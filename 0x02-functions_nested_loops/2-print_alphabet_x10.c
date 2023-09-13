#include "main.h"
/**
 * _islower - Entry point
 * checks loweracase char
 *
 * return : 1 if c lowercase, else , return 0;
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
