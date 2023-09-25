#include <unistd.h>
/**
 * _putchar - to write letter c to stdout 
 * @c: the letter must be printed 
 *
 * Return : on succees 1
 *
 * on error : must return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
