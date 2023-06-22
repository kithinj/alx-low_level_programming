#include "main.h"
#include <stdio.h>

/**
* _isupper - checks if paramter c represents any uppercase letter.
* @i: int  to represent character
* Return: Always 0.
*/
int _isupper(int i)
{
if (i >= 65 && i <= 90)
{
return (1);
}
return (0);
}
