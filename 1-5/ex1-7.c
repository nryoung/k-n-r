#include <stdio.h>

/* copy input to output */
main()
{
    int c;

    while ((c=getchar()) != EOF)
        putchar(c);
    /* send EOF to the terminal */
    putchar(c);
}
