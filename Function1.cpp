#include <iostream>
using namespace std;

int prod(int a, int b) {
    int prod = a * b;
    return prod;
}

int main () {
    int p = prod(3, 4);
    cout << "product = "<< p << endl;
    return 0;
}