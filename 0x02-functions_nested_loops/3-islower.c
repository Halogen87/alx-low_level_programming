/*
 * File: is the function lower case
 * Auth: Dr Marcus Imagwe
 */

#include "main.h"
/**
 * _islower -check if a character is lowercase.
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <=122)
		retun (1);
	else
		retun (0);
}
