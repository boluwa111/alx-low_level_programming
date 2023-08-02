#include <stdio.h>
/**
 * sqrt_recursion - a function that returns the
 * integer square root else returns -1
 * @n: the number to find the sqr root
 * sqrt_helper - hidden function
 * @start - hidden parameters
 * @end - hidden parameter
 * Return: value of x^y
 */


int sqrt_helper(int n, int start, int end)
{
    if (start > end)
    {
        return -1; // No natural square root found
    }

    int mid = start + (end - start) / 2;
    int square = mid * mid;

    if (square == n)
    {
        return mid;
    }
    else if (square < n)
    {
        return sqrt_helper(n, mid + 1, end);
    }
    else
    {
        return sqrt_helper(n, start, mid - 1);
    }
}

int sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Negative numbers do not have a natural square root
    }

    return sqrt_helper(n, 0, n);
}
