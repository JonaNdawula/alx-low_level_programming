#include "main.h"
/**
 *_isalpha - checks for the alphabetic character
 *
 *@y: the character the function is going to check
 *
 *Return: 1 if y is a letter else 0
 */
int _isalpha(int y)
{
	return  ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'));
}
