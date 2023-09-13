#include "main.h"

/**
 * _islower – will check if char is a lower case
 * @c: will be the char to be checked
 * It will return 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

