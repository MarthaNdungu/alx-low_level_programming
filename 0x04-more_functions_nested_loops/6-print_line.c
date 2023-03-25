#include "main.h"
#include <stdio.h>
/**
 * print_line - print straight line
 *@:No of times
 *Return:always 0
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
