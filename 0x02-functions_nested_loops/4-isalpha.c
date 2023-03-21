#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if character  is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)

{
		if ((c >= 'a' && c <= 'z'z) || (c >= 'A' && <= 'Z'))
			return (1);

		else
			return (0);


}
