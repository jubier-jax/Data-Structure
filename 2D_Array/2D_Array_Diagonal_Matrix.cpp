#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10][10] = {0};
    for(int i = 0; i < n; i++)
        cin >> arr[i][i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
