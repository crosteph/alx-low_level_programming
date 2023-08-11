#include<stdio.h>
/**
 * main - A program that prints the size of computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size odf an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n",(unsigned long)sizeof(c));
printf("Size long Long int: %lu bytes(s)\n",(unsigned long)sizeof(d));
printf("Size float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
