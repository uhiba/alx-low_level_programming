#include <stdio.h>
/**
 * swap_int - Swaps the value of two integers
 * @a: The firs integer to be swapped
 * @b: The second integer to be swapped
 * Return: noting
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
