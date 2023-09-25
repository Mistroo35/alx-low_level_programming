#include "main.h"
/**
 * The _memset() function will fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 * @s : the taget
 * @b : the const byte
 * @n : the number of bytes
 *
 * Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
