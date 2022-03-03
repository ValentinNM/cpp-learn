// Se citește un număr natural n.
// Să se determine suma divizorilor săi.

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    long long s = 0;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                s += i;
            }
            if ((n / i) % 2 != 0)
            {
                s += n / i;
            }
        }
    }
    if (i * i == n && i % 2 != 0)
    {           // cazul pentru patrat perfect
        s += i;
    }
    cout << s;
    return 0;
}