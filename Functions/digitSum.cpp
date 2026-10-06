#include<iostream>
using namespace std;

int digSum(int n) {
    int res = 0;

    while(n>0) {
        int lastDig = n % 10;
        res += lastDig;
        n = n/10;
    }
    return res;
}

int main() {
    int num;
    cin >> num;

    cout << digSum(num) << endl;
    return 0;
}