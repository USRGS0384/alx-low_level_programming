#include "main.h"
/**
 * _isupper - test if the character is uppercase or not
 * @c: check the charater
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
