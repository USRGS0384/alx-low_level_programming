#include "main.h"
/**
* _isalpha - print alphabetic characters
* @c: the reult of a character
* Return: 1 if g is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
