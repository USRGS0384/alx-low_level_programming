#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 6;
    day = 07;
    year = 2024;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_days(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

