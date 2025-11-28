#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 5, 6, 7};

    int largest = -1;
    for(int i = 0; i < 6; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }

    int second = -1;
    for(int i = 0; i < 6; i++){
        if(arr[i] != largest)
            second = max(second, arr[i]);
    }

    cout << second;
    return 0;
}

