/**
 * binomial calculate
 * https://thealgorithms.github.io/C-Plus-Plus/d8/db1/binomial__calculate_8cpp.html
 */

#include "binomial.h"

int binomial(int n, int k)
{
    if (k > (n / 2))
        k = n - k;
    if (k == 1)
        return n;
    if (k == 0)
        return 1;

    int result = 1;
    for (int i = 1; i <= k; ++i) {
        result *= n - k + i;
        result /= i;
    }

    return result;
}
