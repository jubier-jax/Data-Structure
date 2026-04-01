#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int queueArr[100];

    for(int i = 0; i < n; i++) {
        cin >> queueArr[i];
    }

    int front = 0, rear = n - 1;

    if(front > rear) {
        cout << "Underflow";
    } else {
        cout << queueArr[front++] << endl;
    }

    for(int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
}
