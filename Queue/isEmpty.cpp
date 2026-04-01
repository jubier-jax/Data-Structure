#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int n;
    cin >> n;

    int queueArr[MAX];
    int front = 0, rear = -1;

    for(int i = 0; i < n; i++) {
        cin >> queueArr[i];
        rear++;
    }

    if(front > rear) cout << "Empty";
    else cout << "Not Empty";
}
