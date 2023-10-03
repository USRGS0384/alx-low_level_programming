#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: The something to print
 *
 * Return: Always 1 on success
 * On error, -1 is returned, and errno
 * set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
