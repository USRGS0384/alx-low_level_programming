#include "main.h"
/**
* _islower - check c if in lowercase
* @c: is the task to be checked
* Return: 1 if char is lowercase, esle  0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
