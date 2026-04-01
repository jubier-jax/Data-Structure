#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int n;
    cin >> n;

    int cq[MAX];
    int front = -1, rear = -1;

    for(int i = 0; i < n; i++) {
        cin >> cq[i];
    }

    front = 0;
    rear = n - 1;

    if(front == -1) {
        cout << "Empty";
    } else {
        cout << cq[front] << endl;

        if(front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
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
