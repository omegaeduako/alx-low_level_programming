#include "main.h"

/**
 * This function checks if a character is a lowercase letter.
 *
 * @param c The character to check.
 * @return 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

