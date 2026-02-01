#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') 
          str[i] -= 32;
        i++;
    }
    cout << str;
    return 0;
}
