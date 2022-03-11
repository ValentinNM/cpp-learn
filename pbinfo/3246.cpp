#include <iostream>
using namespace std;

int main() { 
    int a, b;
    long long s = 0;
    cin >> a >> b;

    while(a <= b) { 
        int contA = 0, contB = 0, contD = 0;
        int copyA = a;
        while(copyA) { 
            if(copyA % 2 == 0) { 
                ++contA;
            } else {
                ++contB;
            }
            contD += 1;
            copyA /= 10;
        }
        if((contD % 2 == 0) && (contA == contB)){ // facem suma daca ambele contoare sunt egale
            s += a;                              // si daca numarul de cifre este par
        }
        ++a;
    }
    cout << s;
    return 0;
}
