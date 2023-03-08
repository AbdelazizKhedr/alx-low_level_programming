#include "main.h"

/**
 * sqRec - calculates square root recursively doing binary search
 * @start: inital number
 * @end: last number within the limit of number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqRec(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (sqRec(start, mid - 1, m));
		if (mid * mid < m)
			return (sqRec(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: squareroot of n or -1 if no natural square root
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqRec(2, n, n));
}
