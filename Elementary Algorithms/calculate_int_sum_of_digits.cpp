#include <iostream>
using namespace std;

int main() { 
    int n, sum = 0;
    cin >> n;
    while (n > 0) { 
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << sum;
    return 0;
}

// Step 0 => start
// Step 1 => read number - n
// Step 2 => add condition - while - the number is having digits
// Step 2.1 => to the initial sum add last digit of n - since sum + n % 10
// Step 2.2 => remove last digit of n - since n / 10
// Step 3 => print sum
// Step 4 => end - return 0