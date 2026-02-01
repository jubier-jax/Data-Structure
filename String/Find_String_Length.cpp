#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);
    int len = 0;
    while(str[len] != '\0') len++;
    cout << len;
    return 0;
}
