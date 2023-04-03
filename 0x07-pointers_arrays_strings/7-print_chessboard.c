#include "main.h"

/**
 * print_chessboard - Start here
 * Desc - Write a function that prints the chessboard.
 *
 * @a: constant
 *
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}

