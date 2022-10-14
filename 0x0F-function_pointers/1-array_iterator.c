#include "function_pointers.h"

/**
*array_iterator - executes a func givenas a  parameter
*@array: pointer to the array
*@size: size of array
*@action: function pointer
*Return: no return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
