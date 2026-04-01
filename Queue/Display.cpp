#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int queueArr[100];

    for(int i = 0; i < n; i++) {
        cin >> queueArr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << queueArr[i] << " ";
    }
}
