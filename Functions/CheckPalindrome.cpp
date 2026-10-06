#include<iostream>
using namespace std;

int reverse(int n) {
    int result = 0;
    while(n>0) {
        int lastDig = n % 10;
        result = result*10 + lastDig;
        n = n/10;
    }
    return result;
}

bool isPalindrome(int num) {
    int revnum = reverse(num) ;
    return num == revnum;
}

int main() {
    int num;
    cin >> num;

    cout << isPalindrome(num) << endl;
    return 0;
}