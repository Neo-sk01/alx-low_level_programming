#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  *@c: the character to be checkede
  *Return: just another day at ALX SE
  *
  */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
