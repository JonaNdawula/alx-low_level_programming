#include "main.h"
/**
 *print_chessboard - function that prints the chessboard.
 *
 *@a: points to the array representing the chess board
 *
 *
 */
void print_chessboard(char (*a)[8])
{

	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{

			_putchar(a[i][j]);
			_putchar(' ');

		}
		_putchar('\n');
	}


}
