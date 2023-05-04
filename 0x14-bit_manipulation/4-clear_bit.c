#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 at a given index.
 *
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success
 * or return -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
