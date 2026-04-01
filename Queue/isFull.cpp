#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int n;
    cin >> n;

    int queueArr[MAX];
    int front = 0, rear = -1;

    for(int i = 0; i < n && i < MAX; i++) {
        cin >> queueArr[i];
        rear++;
    }

    if(rear == MAX - 1) cout << "Full";
    else cout << "Not Full";
}
