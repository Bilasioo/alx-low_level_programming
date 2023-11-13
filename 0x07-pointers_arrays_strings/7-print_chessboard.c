#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int c, b;
for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
{
_putchar(c[b][c]);
}
_putchar('\n');
}
}
