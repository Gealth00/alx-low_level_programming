#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @x: The input number to check
 * Return: int
*/
int print_last_digit(int n)

{
int last;

last = n % 10;
_putchar(last);
return (last);

