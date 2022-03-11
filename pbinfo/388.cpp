// Se citește un număr natural n. Să se determine câți divizori pari are acest număr.
// 12 => 4
// Divizorii pari a lui 12 sunt 2, 4, 6 și 12.

#include <iostream>
using namespace std;

int main() { 
    int n, i = 1, c = 0;
    cin >> n; 
    while(i * i < n) { 
        if(n % i == 0) { // verificam daca i este divizor
            if(i % 2 == 0) { // verificam daca divizorul este par
                ++c; 
            }                       // pentru ca mergem pana la radical din n
            if((n / i) % 2 == 0) { // verificam daca jumatatea acestuia este para
                ++c;
            }
        }
        i++;
    }
    if(i * i == n && i % 2 == 0){ // caz pentru patrat perfect
        ++c;
    }
    cout << c;
    return 0;
}