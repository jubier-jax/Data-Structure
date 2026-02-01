#include <iostream>
using namespace std;

void printStrings(char arr[][100], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char arr[10][100];
    for(int i = 0; i < n; i++)
        cin.getline(arr[i], 100);

    printStrings(arr, n);
    return 0;
}
