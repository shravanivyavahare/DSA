#include<iostream>
using namespace std;

void decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int power = 1;

    while (n > 0) {
        int rem = n % 2;
        binNum += rem * power;
        power = power * 10;
        n = n/2;
    }

    cout << " Binary of " << decNum << " = " << binNum << endl;

}

int main() {
    decToBin(7);
    return 0;
}