#include "main.h"
/**
* _isdigit - function that verifies if a  character is a digit or none
* @c: tested character
* Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
