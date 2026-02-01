#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char arr[10][100];
    for(int i = 0; i < n; i++)
        cin.getline(arr[i], 100);

    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";

    return 0;
}
