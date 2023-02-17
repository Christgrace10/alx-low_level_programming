#include <stdio.h>
/**
 * main - main block
 * Description: Get a random it with 5
 * Return: 0
 */
int main(void)
{	char C = 'a';
	while (C <= 'z')
	{
		putchar(C);
		C++;
	}

	C = 'A';

	while (C <= 'Z')
	{
		putchar('\n');
		C++;
	}

	putchar('\n');
	return (0);
}
