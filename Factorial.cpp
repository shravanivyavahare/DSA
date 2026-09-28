#include <iostream>
using namespace std;

int Factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    cout << " Factorial ( " << n << " ) = " << fact << endl;
    return fact;
}

int main () {
    Factorial(0);
    Factorial(1);
    Factorial(2);
    Factorial(3);
    Factorial(4);
    Factorial(5);
    return 0;
}