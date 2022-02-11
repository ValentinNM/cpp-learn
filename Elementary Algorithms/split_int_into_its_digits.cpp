#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x == 0)
        cout << 0;
    while (x > 0) { 
        int cif = x % 10;
        x = x / 10;
        cout << cif << " ";
    }
    return 0;
}

// Step 0 => start
// Step 1 => adding condition for when X = 0
// Step 2 => creating a loop checking if there are digits with x
// Step 2.1 declaring a var to give us the remainer /modulo of x - since x % 10
// Step 2.2 removing last digit of x - since x/10
// Step 3 => printing each digit within the loop (since only in the loop we have acces to every digit due to each itineration)
// Step 4 => end the program = since return 0;