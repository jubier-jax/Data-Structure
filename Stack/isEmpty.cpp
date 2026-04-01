#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int n;
    cin >> n;

    int stackArr[MAX];
    int top = -1;

    for(int i = 0; i < n; i++) {
        cin >> stackArr[i];
        top++;
    }

    if(top == -1) cout << "Empty";
    else cout << "Not Empty";
}
