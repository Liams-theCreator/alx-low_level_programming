#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: bytes
 *
 * Return: lcount
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j;
	int lcount = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lcount++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return lcount;
}
