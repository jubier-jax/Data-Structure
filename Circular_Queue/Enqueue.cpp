#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int n, x;
    cin >> n;

    int cq[MAX];
    int front = -1, rear = -1;

    for(int i = 0; i < n; i++) {
        cin >> x;

        if((rear + 1) % MAX == front) {
            cout << "Full\n";
            break;
        }

        if(front == -1) front = 0;

        rear = (rear + 1) % MAX;
        cq[rear] = x;
    }

    if(front != -1) {
        int i = front;
        while(true) {
            cout << cq[i] << " ";
            if(i == rear) break;
            i = (i + 1) % MAX;
        }
    }
}
