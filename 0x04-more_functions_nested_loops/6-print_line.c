#include "main.h"
#include <stdio.h>
/**
 * print_line - print straight line
 * Description: the number of times the character
 *@:No of times
 *Return:void
*/
void print_line(int n)
{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
}
