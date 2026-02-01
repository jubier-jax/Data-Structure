#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[10][10];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    int count = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(arr[i][j] == 0) count++;

    if(count > (m*n)/2) cout << "Sparse Matrix\n";
    else cout << "Not Sparse\n";

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
