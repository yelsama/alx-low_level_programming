#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: given number to get square root
 * Return: square root of n
 */
int	_sqrt_recursion(int n)
{
        return -1; // Error: square root of a negative number is not defined
    }
    if (n == 0 || n == 1) {
        return n; // Base case: the square root of 0 and 1 is itself
    }
    int low = 0, high = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        int square = mid * mid;
        if (square == n) {
            return mid;
        } else if (square < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // If the loop terminates, the floor of the square root of n is the value of high
    return high;
}
