// Se dă un număr natural n. Să se afişeze în ordine crescătoare, termenii şirului lui Fibonacci mai mici sau egali cu n.
// 40 => 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 1, t2 = 1, tn = 0;
    cin >> n;

    if (n == 1) {
        cout << t1 << " " << t2;
    } else {
        cout << t1 << " " << t2 << " "; // printam cei doi termeni inainte
        while (n >= tn) {
            tn = t1 + t2; // formula termenului n
            t1 = t2; // mutam t1 inainte la dreapta cu o pozitie
            t2 = tn; // mutam t2 inainte la dreapta cu o pozitie, dam valoarea lui tn
            if (t2 <= n) {
                cout << t2 << " ";
            }
        }
    }
    return 0;
}