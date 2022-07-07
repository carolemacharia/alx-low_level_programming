#include "main.h"
/*
 * _isupper(int c) checks for uppercase characters
 * Return 1 if c is uppercase
 *@c: input; the character to be checked
 * Returns 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
