#include <stdio.h>
/**
 * main - program to prints its name followed by new line 
 *
 * #argc int 
 *
 * #argv list
 *
 * return always 0
 */

int main( int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
