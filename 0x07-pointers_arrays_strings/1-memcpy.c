#include "main.h"
/**
 *_memcpy - The _memcpy() workingfor;copying n bytes
 *from memory area to src to memory area descr
 *@dest: is the area where bytes have been copied
 *@src: the copied bytes;area
 *@n: the number of bytes have been copied
 *Return: returns to a pointer n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
