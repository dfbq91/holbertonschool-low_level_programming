#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for an amount of money.
 *@argc: int type. Is an argument count
 *@argv: char pointer to pointer type. Is an argument vector.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int money, coins = 0;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}

	money = atoi(argv[1]);

	while (money > 0 && argc == 2)
	{
		if (money >= 25)
		{	coins = coins + money / 25;
			money = money % 25;
		}
		if (money >= 10)
		{	coins = coins + money / 10;
			money = money % 10;
		}
		if (money >= 5)
		{	coins = coins + money / 5;
			money = money % 5;
		}
		if (money >= 2)
		{	coins = coins + money / 2;
			money = money % 2;
		}
		if (money >= 1)
		{	coins = coins + money / 1;
			money = money % 1;
		}
	}
	return (printf("%d\n", coins), 0);
}
