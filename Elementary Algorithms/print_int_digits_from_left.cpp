// generate the digits the way the appear in the number
// Step 0 => start
// Step 1 => declare number(n), auxiliary variable(p), first digit(cif)
// Step 2 => read n and p
// Step 3 => add zeros to p to match th elenght of n
// Step 4 => while ther are still digits in n
// Step 4.1 => get first digit of n -> since cif = n / p 
// Step 4.? => !! can do some work { }
// Step 4.2 => remove the last diifit of n -> since n = n % p -> ex: 1234 % 1000 = 234
// Step 4.3 => removing last digit of aux int(p)
// Step 5 => end

#include <iostream>
using namespace std;

int main() { 
    int n, p = 1, cif;
    cin >> n;
    while (p * 10 <= n)
        p *= 10;
        while (n > 0)
        {
            cif = n / p;
            // here can do some work
            n %= p;
            p /= 10;
        }
    return 0;
}