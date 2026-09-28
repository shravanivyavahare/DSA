#include<iostream>
using namespace std;

void sayHello() {
    cout << "Hello World :) \n";
}

void Assistant () {
    sayHello();
    cout << "Work done \n";
}

int main () {
    Assistant ();
    return 0;
}