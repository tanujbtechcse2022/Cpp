#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if(a < 1) {
        cout << "No, it's not a power of 2";
        return 0;
    }

    while(a != 1) {
        if(a % 2 == 1) {
            cout << "No, it's not a power of 2";
            return 0;
        }
        a = a / 2;
    }

    cout << "Yes, it is a power of 2";
    return 0;
}

