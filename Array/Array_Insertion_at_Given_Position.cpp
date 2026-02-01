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

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
