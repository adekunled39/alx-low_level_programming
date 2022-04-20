#include <unistd.h>
/**
* _putchar - Write the character c to stdout
* @c: the charcter to  print
*
* Return: on success 1
* On errorr, -1 is returned, and error is there returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
