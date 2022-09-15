#include "main.h"
/**
 * int _isalpha(Int c)- is a function
 * return 1: if c is a letter, uppercase or lowercase
 * return 0: if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
