#include<stdio.h>
#include<unistd.h>
/*main - shows the entry point
 * 
 * Return is zero to show success
 */
int _putchar(char c)
{
	
	return (write(1, &c, 1));
}
