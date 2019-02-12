#include "holberton.h"
#include <stdio.h>
/**
 *print_times_table  -  prints the n times table, starting with 0
 *@n: is a int
 *Return: values 0
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n < 15 && n > 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				if (b != 0)
				{
					if (c <= 9)
					{
						printf("   ");
					}
					else if (c <= 99)
					{
						printf("  ");
					}
					else
					{
						printf(" ");
					}

				}
				printf("%d", c);
				if (b != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}