#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if(a == 0) {
        cout << 1;
        return 0;
    }

    int ans = 0, rem, mul = 1;

    while(a > 0) {
        rem = a % 2;     // Get last bit
        rem = rem ^ 1;   // Flip bit (0->1, 1->0)
        ans = ans + rem * mul;
        mul *= 2;
        a /= 2;
    }

    cout << ans;
    return 0;
}

