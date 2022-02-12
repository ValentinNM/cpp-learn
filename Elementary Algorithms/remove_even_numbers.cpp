// Step 0 => start
// Step 1 => declare variables numbeber(n), auxiliary(aux), result(res)
// Step 2 => read n
// Step 3 => enter a loop to access all the digits of n
// Step 3.1 => check if last digit is not even and add its multiplication with aux to the previous result
// Step 3.2 => increase the aux digits to match the next itineration 
// Step 3.2 => remove last difit of n for the next iteration
// Step 4 => print res
// Step 5 => end

#include <iostream>
using namespace std;

int main() { 
    const int TEN = 10;
    int n, aux = 1, res = 0;
    cin >> n;
    while(n) { 
        int ld = n % TEN;
        if(ld % 2 != 0) { 
            res = res + ld * aux;
            aux *= TEN;
        }
        n /= TEN; 
    }
    cout << res;
    return 0;
}