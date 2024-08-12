#include <iostream>

using namespace std;

int findQuotient(int dividend, int divisor)
{
    int s = 0, e = dividend;
    int ans = -1;

    while (s <= e)
    {
        long long mid = s + (e - s) / 2; // Use long long to prevent overflow
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int dividend = -29;
    int divisor = -7;
    int quotient = findQuotient(abs(dividend), abs(divisor));
    if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
    {
        quotient = 0 - quotient;
    }

    cout << "Quotient: " << quotient << endl;

    return 0;
}