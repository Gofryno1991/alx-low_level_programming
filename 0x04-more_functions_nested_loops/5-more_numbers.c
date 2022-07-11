#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return:0
 */
int main(void)
{
	int i = 0;
	int j;
	
	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{

			printf("%d", j);
			j++;
		}

		printf("\n");
		i++;
	}
	return (0);
}
