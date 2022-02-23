// Să se scrie un program care citește numărul natural n
// și determină suma S=1*2-2*3+3*4-...±n*(n+1).

// Exemplu=> IN: 4 | OUT: -12 

  #include <iostream>
  using namespace std;

  int main() {
      int n, s = 0;
      cin >> n;

      int i = 1;
    for(i = 1; i <= n; i++) { 
        if(i % 2 == 0){ 
        s -= i*(i+1);
        } else { 
            s += i*(i+1);
        }
    }
    cout << "Rezultatul este " << s;
return 0;
}

//  versiune optimizata folosind librarie
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() { 
//     int n = 6, s = 0;

//     for(int i = 1; i <= n; i++){
//       s += pow(-1, i + 1)*i*(i + 1);
//     }
//     std::cout << s;
//     return 0;
//   }