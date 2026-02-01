#include <iostream>
using namespace std;

int main() {
    char str[100];
    int pos, n;
    cin.getline(str, 100);
    cin >> pos >> n;
    int len = 0;
    while(str[len] != '\0') len++;
    for(int i = pos; i < pos + n && i < len; i++) 
      cout << str[i];
    return 0;
}
