#include <stdio.h>
/**
 * main - prints all the numbers of base in lowercase
 * Return: Always (Successful)
 */

int main(void)
{
	int i;
	char d;

	for (i = '0' ; i <= '9'; i++)
	putchar(i);

	for (d = 'a'; d <= 'f'; d++)
	putchar(d);
	putchar('\n');

	return (0);

}

