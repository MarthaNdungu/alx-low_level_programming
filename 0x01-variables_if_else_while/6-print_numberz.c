#include <stdio.h>
/**
 * main -  prints  single digit numbers starting from zero without using char
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
