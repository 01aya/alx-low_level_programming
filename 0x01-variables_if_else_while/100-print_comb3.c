#include <stdio.h>
/**
 * main - main function
 * Description: 'prints all possible different combinations of two digits'
 * Return : Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
