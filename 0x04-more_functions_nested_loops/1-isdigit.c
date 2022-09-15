#include "main.h"
/**
 * _isdigit - function that lets check for a digit 0 to 9
 * @c: an input integer
 * Return: 1 if its a digit 0 if otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
