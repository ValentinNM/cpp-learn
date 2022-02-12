// Step 0 => start
// Step 1 => declare variables number(n), index(i) and to hold the value if prime(is_prime)
// Step 2 => add condition for when n is 1, set is_prime to false
// Step 3 => create a loop to go through all the possible divisors of n
// Step 3.1 => starting with assuming than n is prime
// Step 3.2 => adding condition to check if n is not prime
// Step 3.3 => increase the divisor/ index(i)
// Step 4 => check if is_prime is true and print 'prime' else print 'not prime'
// Step 5 => end


#include <iostream>
using namespace std;

int main() {
    int n, i = 2, is_prime;
    cin >> n;
    if (n < i) {
        is_prime = 0;
    }
    while (i <= n) {
        is_prime = 1;
        if (n % i == 0) {
            is_prime = 0;
        }
        ++i;
    }
    if (is_prime == 1) {
        cout << "Is prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}