// Se citește un număr natural n. Să se determine suma divizorilor impari ai săi.
//  30 => 24

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    long long s = 0; // data type for when the sum is past long
    for (i = 1; i * i < n; i++) { // enter loop to check up to n
                                // i*i  using insted square root n
        if (n % i == 0) { // if divisor found
            if (i % 2 != 0) { // and the divisor is odd
                s += i;       //  add to sum
            }
            if ((n / i) % 2 != 0) { // if the divisor is odd
                s += n / i;
            }
        }
    }
    if (i * i == n && i % 2 != 0) { // cazul pentru patrat perfect && to be odd
        s += i;
    }
    cout << s;
    return 0;
}