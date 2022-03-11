// Se citește un număr natural n. Să se determine suma divizorilor pari ai săi.
// 30 => 48
// Divizorii pari lui 30 sunt 2, 6, 10 și 30. Suma lor este 48.

#include <iostream>
using namespace std;

int main() { 
    int n, i;
    long long s = 0;
    cin >> n;
    for(i = 1; i * i < n; i++) { 
        if(n % i == 0) { //verificam daca este divizor
            if(i % 2 == 0) { // daca par
                s += i;
            }
            if ((n / i) % 2 == 0) { // daca par
                s += n / i;
            }
        }
    }
    if (i * i == n && i % 2 == 0) { // caz special de patrat perfect
        s += i;
    }
    cout << s;
    return 0;
}