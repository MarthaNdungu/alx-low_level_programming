#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: Alaways (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)

	if (i != 'q' && i != 'e')
		putchar(i);

	putchar('\n');
		return(0);


}
