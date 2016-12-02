/*#############################################################################
# Name: 02-leap-years.c
# Created: 11-30-2016 21:54:53
# Edited: 11-30-2016 22:37:42
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     parse_year(char *yearstr, int *year);

int     main(int argc, char **argv)
{
    int     year;
    int     leaps;

    if (argc == 2)
    {
        year = 0;
        if (parse_year(argv[1], &year) == 0 || year > 10000)
        {
            printf("Invalid parameters: must be a number from 0 - 10000");
            return (0);
        }
    }
    else
        year = 2016;
    leaps = 0;
    while (++year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("%d\n", year);
            leaps++;
        }
        if (leaps == 25)
            break;
    }
    return (0);
}

int    parse_year(char *yearstr, int *year)
{
    int     digits;
    int     factor;
    int     i;
    int     j;

    digits = 0;
    i = 0;
    while (yearstr[i])
    {
        if (yearstr[i] < 48 || yearstr[i] > 57)
            return (0);
        else
            digits++;
        i++;
    }
    j = 0;
    while (digits > 0)
    {
        i = 1;
        factor = 1;
        while (i++ < digits)
            factor *= 10;
        *year += (factor * (yearstr[j] - '0'));
        j++;
        digits--;   
    }
    return (1);
}
