#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if(a < 0) {
        cout << "Invalid number";
        return 0;
    }

    int num = a;
    int ans = 0;

    while(num > 0) {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }

    if(a == ans)
        cout << "Number is palindrome";
    else
        cout << "Number is not palindrome";

    return 0;
}

