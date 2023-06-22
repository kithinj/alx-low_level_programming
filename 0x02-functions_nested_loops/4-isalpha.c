#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: chech for all alphabetic characters
 *
 * Return: 1 for alphabeti character or 0  if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
