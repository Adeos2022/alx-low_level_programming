#include "main.h"

/**
* _puts-prints astring in stdout
*Return:void
*/
void _puts(char *str)
{
int i=0;

while (*(str+i))
{
_putchar (*(str+i));
i++;
}
_putchar('\n');
}
