// Step 0 => start 
// Step 1 => declare number(n), digit to compare to(k) and the (counter)
// Step 2 => add confition for when the number is 0
// Step 3 => loop through the number and check each digit;
// Step 3.1 => find last digit
// Step 3.2 => check if last digit equals the digit to compare and increas the counter by 1
// Step 3.3 => remove last digit of the number
// Step 4 => print counter
// Step 5 => end

#include <iostream>
using namespace std;

int main() { 
    int n, k, counter = 0;
    cin >> n >> k; 
    if(n == 0 && k == 0)
        counter = 1;
    while (n > 0)
    {
        int ld = n % 10;
        if(ld == k){
            ++counter;
        }
        n /= 10;
    }
    cout << counter;
    return 0;
}