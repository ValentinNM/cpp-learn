// Step 0 => start
// Step 1 => declare the variables
// Step 2 => read number
// Step 3 => while there are digits in the number (n>0)
// Step 3.1 => find last digit
// Step 3.2 => add 10 to th elast value of the reverse and add the last digit
// Step 3.3 => remove last digit of n;
// Step 4 => print last digit
// Step 5 => end

#include <iostream>
using namespace std;

int main() {

    int n, reverse;
    cin >> n;
    while(n > 0) {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }
    cout << reverse;
    return 0;
}