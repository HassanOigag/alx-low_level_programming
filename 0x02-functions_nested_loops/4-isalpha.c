#include "main.h"
/**
*_isalpha - checks if a character is alphabet
*@c: the character in questions
*Return: returns 1 if c is alphabet else returns 0
*/
int	_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
