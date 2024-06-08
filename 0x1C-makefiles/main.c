#include<stdio.h>
#include"header.h"
/**
 * main - entry point
 *
 * Return: always nothing
 *
 */
main(void)
{
	printf("\nThis is maic.c"\n);
	printf("\nCalling hello function");
	hello();
	printf("\nCalling add function\n");
	add(5,7);
	printf("\nBack in main.c\");
}
