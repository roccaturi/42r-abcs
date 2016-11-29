/*#############################################################################
# Name: 00-hello-world.c
# Created: 11-28-2016 22:48:50
# Edited: 11-28-2016 23:02:04
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc < 2)
        printf("Hello?\n");
    else if (argc == 2)
        printf("Hello, %s!\n", argv[1]);
    else
        printf("Hello, world!\n");
}
