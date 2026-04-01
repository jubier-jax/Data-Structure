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
        if(top == MAX - 1) {
            cout << "Overflow\n";
            break;
        }
        stackArr[++top] = x;
    }

    for(int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
}
