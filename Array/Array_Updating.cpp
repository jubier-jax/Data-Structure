#include <iostream>
using namespace std;

int main() {
    int n, pos, value;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> pos >> value;
    arr[pos] = value;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
