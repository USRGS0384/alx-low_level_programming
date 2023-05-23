#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	prints("size of a char: %zu byte(s)\n", sizeof(char));
	prints("size of an int: %zu byte(s)\n", sizeof(int));
	prints("size of a long int: %zu byte(s)\n", sizeof(long int));
	prints("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	prints("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
