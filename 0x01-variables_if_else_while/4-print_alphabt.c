#include <stdio.h>
/**
  * main - prints alphabet in lower case except q and e
  * followed by a new line
  * Return: 0 if successful
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
