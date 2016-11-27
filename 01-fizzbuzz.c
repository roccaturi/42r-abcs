/*#############################################################################
# Name: 00-fizzbuzz.c
# Created: 11-27-2016 08:26:45
# Edited: 11-27-2016 09:02:15
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <unistd.h>

void    fizzbuzz(int lower, int upper);

void    putchar(char c);

void    putstr(char *str);

void    putnbr(int n);


int     main(void)
{
    fizzbuzz(0, 100);
    return (0);
}


/* fizzbuzz accepts two bounds, an int lower and an int upper, then prints
every int between bounds (inclusive), except ints divisible by 3, 5, or both,
which are replaced with 'fizz', 'buzz', or 'fizzbuzz'. Newlines delimit.*/ 
void    fizzbuzz(int lower, int upper)
{
    int     i;   

    i = lower;
    while (i < (upper + 1))
    {
        if (i == 0)
            putchar('0');
        else 
        {
            if (i % 3 == 0)
            {
                putstr("fizz");
                if (i % 5 == 0)
                    putstr("buzz");
            }
            else if (i % 5 == 0)
                putstr("buzz");
            else
                putnbr(i);
        }
        putchar('\n');
        i++;
    }
}

void    putchar(char c)
{
    write(1, &c, 1);
}

void    putstr(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        putchar(str[i++]);
}

void    putnbr(int n)
{
    if (n > 9)
    {
        putnbr(n / 10);
        putchar(n % 10 + '0');
    }
    else
        putchar(n + '0');
}
