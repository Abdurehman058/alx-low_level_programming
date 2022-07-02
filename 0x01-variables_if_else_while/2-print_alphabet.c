#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *
 *return: Always 0.
 **/
int main(void)// this specifies there are no arguments taken by main
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
