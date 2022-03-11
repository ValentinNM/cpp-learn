/*
Se dau două numere naturale a și b.
Calculați suma numerelor echilibrate din intervalul [a,b].
Un număr este echilibrat dacă are suma cifrelor pare egală cu suma cifrelor impare.
De exemplu 3467 este echilibrat, iar 8333 nu este.
 
[301 402] => 2097

În intervalul [301, 402] numerele echilibrate sunt 314, 336, 341, 358, 363, 385, iar suma lor este 2097.
*/ 

#include <iostream>
using namespace std;

int main() { 
    int a, b;
    long long s = 0;
    cin >> a >> b;

    while(a <= b) { 
        int contA = 0, contB = 0; // contor pentru suma paritatii/ imparitatii
        int copyA = a;
        while(copyA) {            // copyA % 2 == 0 la fel ca (copyA % 10) % 2 == 0
            if(copyA % 2 == 0) { // daca par facem suma
                contA += copyA % 10;
            } else { // daca par facem suma
                contB += copyA % 10;
            }
            copyA /= 10;
        }
        if(contA == contB){ // suma sumelor
            s += a;
        }
        ++a;
    }
    cout << s;
    return 0;
}
