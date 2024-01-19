#include "main.h"

/**
 * _print-rev_recursion - is the function
 *
 * @s the string that must be printed
 *
 * return  : always 0 (succes
 *
 */

void _print_rev_recursion (char *s)
	{
	if(*s)
		{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		}
	}
