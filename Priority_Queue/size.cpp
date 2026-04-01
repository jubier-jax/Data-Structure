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
    cout << "Size of Priority Queue: " << pq.size() << endl;
    return 0;
}
