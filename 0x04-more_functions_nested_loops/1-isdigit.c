#include "main.h"

/**
 * _isdigit -it will check if the numbers are 0 - 9
 * @c: charactor to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
