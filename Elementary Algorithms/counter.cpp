#include <iostream>
using namespace std;

int main() { 
    int n, counter = 0;
    cin >> n;
    if(n == 0)
        counter = 1;
    while(n > 0) { 
        ++counter;
        n /= 10;
    }
    cout << counter;
    return 0;
}

// Step 0 => start
// Step 1 => declaring the number and initialising counter with 0 
// Step 2 => read number
// Step 3 => add condition for when number is 0 to set the counter to 1 (digit)
// Step 4 => add a vondition to verify that while the number still has digits/value
// Step 4.1 => increase the counter at the begining for the cycle/loop
// Step 4.2 => removing the last digit from the number
// Step 5 => print the counter
// Step 6 => end