#include "main.h"

/**
  * _isalpha - write a function that checks for alphabetic character
  * @c: c is a character to be checked
  * Return: Returns 0 or 1 depending on the condition
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
