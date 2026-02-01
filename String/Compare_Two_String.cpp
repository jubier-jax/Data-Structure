#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) i++;
    if(str1[i] == str2[i]) 
      cout << "Equal";
    else if(str1[i] < str2[i]) 
      cout << "str1 < str2";
    else 
      cout << "str1 > str2";
    return 0;
}
