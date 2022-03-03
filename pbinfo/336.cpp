// sum S=1*n+2*(n-1)+3*(n-2)+...+n*1.

#include <iostream>
using namespace std;

int main() { 
    int n, s = 0, i = 1;
    cin >> n;
    while(i <= n) { 
        s += i * (n - i + 1);
        ++i;
    }
    cout << "Rezultatul este " << s;
    return 0;
}