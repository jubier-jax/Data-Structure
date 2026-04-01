#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n, value;
    cout << "How many elements to insert? ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> value;
        pq.push(value);
    }
    if(pq.empty()) {
        cout << "Priority Queue is empty\n";
    } else {
        cout << "Priority Queue is not empty\n";
    }
    return 0;
}
