#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
<<<<<<< HEAD
* main - entry point
*
*
* Return: always (0)
*
*/

int main(void)
{
char n[] = "_putchar";
    int l = sizeof(n)-1;

for (int e = 0; e < l; e++)
{
putchar(n[e]);
putchar('\n');
}
return (0);
=======
 * main - start
 * Return: always 0
 *
 *
 */
int main(void)
{
	_putchar ('_');
	_putchar ('p');
	_putchar ('u');
	_putchar ('t');
	_putchar ('c');
	_putchar ('h');
	_putchar ('a');
	_putchar ('r');
	_putchar('\n');

	return (0);
>>>>>>> de17a5025d146e1f6ee48bc762093f2732839249
}
