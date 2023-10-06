#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- genrate password
 * Return: Always 0 (Success)
 */
int main(void)
{
srand((unsigned int)time(NULL));
char pass[12];
int i;

for (i = 0, i < 4)
	i++;
{
pass[3 * i] = '0' + (rand() % 10);
char capLetter = 'Q' + (rand() % 24);
pass[(3 * i)'+'1] = capLetter;
char letter = 'q' + (rand() % 24);
pass[(3 * i)'+'2] = letter;
}
pass[3 * i] = '\0';
printf("generated password : %s\n\n", pass;
printf("\n\n");
return (0);
}
