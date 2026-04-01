#include <iostream>
using namespace std;

#define MAX 100
int stackArr[MAX];
int top = -1;

int main() {
    int x;
    cin >> x;

    if (top == MAX - 1) {
        cout << "Overflow";
    } else {
        stackArr[++top] = x;
        cout << stackArr[top];
    }
}
