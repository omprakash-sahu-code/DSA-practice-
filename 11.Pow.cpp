#include <iostream>
using namespace std;

double pow(double x, int n)
{ // O(n)
    double ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }
    return ans;
}

double Binary_Exponentiation(double x, int n)
{ // O(log n)
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;
    if ((x == -1) && (n % 2 == 0))
        return 1;
    if ((x == -1) && (n % 2 != 0))
        return -1;

    long bin = n;
    if (bin < 0)
    {
        x = 1 / x;
        bin = -bin;
    }
    double ans = 1;

    while (bin > 0)
    {
        if (bin % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        bin = bin / 2;
    }

    return ans;
}

int main()
{
    cout << "Answer= " << Binary_Exponentiation(9.5, 5);
    return 0;
}