#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int n;
    cin >> n;

    int cq[MAX];
    int front = -1, rear = -1;

    for(int i = 0; i < n && i < MAX; i++) {
        cin >> cq[i];
    }

    if(n == 0) front = rear = -1;
    else {
        front = 0;
        rear = n - 1;
    }

    if((rear + 1) % MAX == front) cout << "Full";
    else cout << "Not Full";
}
