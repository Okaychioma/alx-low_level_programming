#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - assigns a random number to int n everytime 
 * it executes, and prints it
 * Return: always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
