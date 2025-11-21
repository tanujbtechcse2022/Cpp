#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int ans = 0, mul = 1;

    while(num > 0) {
        int rem = num % 8;     // Get remainder when divided by 8
        ans = rem * mul + ans; // Build octal number
        mul *= 10;             // Move to next place value
        num /= 8;              // Reduce number
    }

    cout << "Octal value: " << ans;
    return 0;
}

