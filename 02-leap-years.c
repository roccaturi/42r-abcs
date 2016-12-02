/*#############################################################################
# Name: 02-leap-years.c
# Created: 11-30-2016 21:54:53
# Edited: 11-30-2016 22:06:29
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    int     year;
    int     leaps;

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
