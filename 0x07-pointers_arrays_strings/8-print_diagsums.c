#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of two diagonals of a square matrix
 * @a: pointer to start the  matrix
 * @size: width of thwe  matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, p, k = 0, d = 0;
for (i = 0; i < size; i++)
{
p = (i * size) + i;
k += *(a + p);
}
for (j = 0; j < size; j++)
{
p = (j * size) + (size - 1 - j);
d += *(a + p);
}
printf("%i, %i\n", k, d);
}
