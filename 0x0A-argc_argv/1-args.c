#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into a program
 * followed by a line
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribut__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
