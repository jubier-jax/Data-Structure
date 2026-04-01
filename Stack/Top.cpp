#include <iostream>
using namespace std;

#define MAX 100
int stackArr[MAX];
int top = -1;

int main() {
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        stackArr[++top] = x;
    }

    if(top == -1) {
        cout << "Empty";
    } else {
        cout << stackArr[top];
    }
}
