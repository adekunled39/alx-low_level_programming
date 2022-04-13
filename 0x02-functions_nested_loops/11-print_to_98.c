#include "main.h"
#include <stdio.h>

/**
*11-print_to_98: Print all natural number free 98
*in order seprated by a comma followed by a space.i
*@n:the number to begin counting at.
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
