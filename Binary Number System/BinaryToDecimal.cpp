#include<iostream>
using namespace std;

void binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int power = 1;

    while(n > 0) {
        int lastDig = n % 10;
        decNum += lastDig * power;
        power = power*2;
        n = n / 10;
    }
    cout << decNum << endl;
}

int main () {
    binToDec(101);
    return 0;
}