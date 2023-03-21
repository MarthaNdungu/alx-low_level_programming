#include "main.h"
/**
 * _islower - check if the character is lowercase
 * @c: the character being checked
 *  Return: 1 if the character is lowercas,e otherwise 0
 */

int _islower(int c)

{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);

}
