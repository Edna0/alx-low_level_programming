#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name_as_is - prints a name as is
  * @name: name of the person
  * @f: function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
