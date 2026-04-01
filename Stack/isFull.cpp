#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int n;
    cin >> n;

    int stackArr[MAX];
    int top = -1;

    for(int i = 0; i < n && i < MAX; i++) {
        cin >> stackArr[i];
        top++;
    }

    if(top == MAX - 1) cout << "Full";
    else cout << "Not Full";
}
