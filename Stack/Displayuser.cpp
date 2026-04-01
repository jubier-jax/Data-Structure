#include <iostream>
using namespace std;

int main() {
    int n, x;
    int stackArr[100];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        stackArr[i] = x;
    }

    for(int i = n - 1; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
}
