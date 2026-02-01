#include <iostream>
using namespace std;

int main() {
    char str[100];
    int n;
    cin.getline(str, 100);
    cin >> n;
    for(int i = 0; i < n && str[i] != '\0'; i++) 
      cout << str[i];
    return 0;
}
