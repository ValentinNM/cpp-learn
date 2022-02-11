// Step 0 => start
// Step 1 => declare variables number + first digit
// Step 2 => read number
// Step 3 => if number is 0 then first digit is 0
// Step 4 => want to find the other digits
// Step 4.1 => want to go though each last digit of the number and remove it
// Step 5 => print the last digit
// Step 6 => end

#include<iostream>
using namespace std;

int main() { 
    int n, first_digit;
    cin >> n;
    if(n == 0)
        first_digit = 0;
    while (n > 9) {
        n /= 10;
        first_digit = n;
    }
    cout << first_digit << '\n';
    return 0;
}