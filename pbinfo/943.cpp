// Se dă n un număr natural nenul. Să se afle ultima cifră a sumei: S=1^4 + 2^4 + 3^4 + ... + n^  4.
// Programul va afișa pe ecran ultima cifră a numărului S.
// S=1+16+81+256=354, deci ultima cifră este 4. 
// 4 => 4

#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    int n;
    long long s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        long long ct = pow(i, 4);
        s += ct;
    }
    s %= 10;
    cout << s;
    return 0;
}


// solutia 2 - mai eficienta 
#include <iostream>
using namespace std;

int main(){ 
    int n, cat, rest, sum = 0;
    cin >> n;
    rest = n % 10; // primele "rest" numere din  ciclu nefinalizat
    cat = n / 10; // cate cicluri am
    sum = 3 * cat;
    sum %= 10;

    switch (rest)
    {
    case 1:
        sum += 1;
        sum %= 10;
        break;
    case 2:
        sum += 7;
        sum %= 10;
        break;
    case 3:
        sum += 8;
        sum %= 10;
        break;
    case 4:
        sum += 4;
        sum %= 10;
        break;
    case 5:
        sum += 9;
        sum %= 10;
        break;
    case 6:
        sum += 5;
        sum %= 10;
        break;
    case 7:
        sum += 6;
        sum %= 10;
        break;
    case 8:
        sum += 2;
        sum %= 10;
        break;
    case 9:
        sum += 3;
        sum %= 10;
        break;
    default: 
        break;
    }
    cout << sum;
    return 0;
}