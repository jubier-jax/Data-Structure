#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int value;
    cin >> value;

    int i = n - 1;
    while(i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;
    n++;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
