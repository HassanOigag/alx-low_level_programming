#include "main.h"
/**
*_islower - checks if a character is lower case or not
*@c: is the character that we want to check
*Return: 1 if the character is lowercase else reutrns 0
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
