#include "main.h"
/**
 * _abs - main function
 *@i: main code integer
 * Return: 0 and closes
 */
int _abs(int i)
{

	if (i >= 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	return (0);
}
