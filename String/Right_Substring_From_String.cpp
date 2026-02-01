#include <iostream>
using namespace std;

int main() {
    char str[100];
    int n;
    cin.getline(str, 100);
    cin >> n;
    int len = 0;
    while(str[len] != '\0') len++;
    for(int i = len - n; i < len; i++) cout << str[i];
    return 0;
}
