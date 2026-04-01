#include <iostream>
using namespace std;

#define MAX 100
int queueArr[MAX];
int front = 0, rear = -1;

int main() {
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(rear == MAX - 1) {
            cout << "Overflow\n";
            break;
        }
        queueArr[++rear] = x;
    }

    for(int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
}
