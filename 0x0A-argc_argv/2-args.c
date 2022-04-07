#include <stdio.h>
#include <stdlib.h>

/**
 * main: Prints the number of arguments passed into the program
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int i = 0;
	
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}	
	return (0);
}
