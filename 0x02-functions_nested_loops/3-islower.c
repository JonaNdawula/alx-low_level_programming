#include "main.h"
/**
 *_islower - checks if a character is lower case
 *
 *@x: is the char to be checked by function
 *
 *Return: 1 if character is lower case, else 0
 *
 */

int _islower(int x)
{
if (x >= 'a' && x <= 'z')
{
return (1);
}
else
{
return (0);
}


}
