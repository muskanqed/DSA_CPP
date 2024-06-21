#include <iostream>
using namespace std;

void Problem1()
{
    char c;
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << 0;
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}

void Problem2()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = i, count = 0;
        while (count < i)
        {
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

void Problem3()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i, count = 2 * n + 1, gaps = (n - i), k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k = k + 1;
        }
        int m = 1, ch = 2 * i - 1;
        while (m <= ch)
        {
            cout << "*";
            m = m + 1;
        }
        k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

void Problem4()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void Problem5()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void Problem6()
{
    int i, j, n;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        char p = 'A' + i - 1;
        for (j = i; j >= 1; j--)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
}

void Problem7()
{
    int no;
    cin >> no;
    int i = 1;
    int n = 2 * no - 1;
    while (i <= (no))
    {
        int gaps = n - 2 * i + 1, k = 1;
        int j = i;
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        int ch = n - gaps, z = (ch + 1) / 2;
        while (z >= 1)
        {
            cout << j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch - 1) / 2;
        while (z >= 1)
        {
            j = j - 1;
            cout << j;
            z = z - 1;
        }
        k = 1;
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

void Problem8(int n)
{
    int i = 1;
    while (i <= (n))
    {
        int gaps = n - 2 * i + 1, k = 1;
        if (i > (n + 1) / 2)
        {
            int no = (n + 1) / 2;
            gaps = 2 * (i % no);
        }
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        int ch = n - gaps;
        while (ch >= 1)
        {
            cout << "*";
            ch = ch - 1;
        }
        k = 1;
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

int main()
{
    // Problem1();
    // Problem2();
    // Problem3();
    // Problem4();
    // Problem5();
    // Problem6();
    // Problem7();
    Problem8(5);

    return 0;
}