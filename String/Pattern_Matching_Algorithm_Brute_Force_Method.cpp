#include <iostream>
using namespace std;

int main() {
    char text[100], pattern[50];
    cin.getline(text, 100);
    cin.getline(pattern, 50);

    int n = 0, m = 0;
    while(text[n] != '\0') n++;
    while(pattern[m] != '\0') m++;

    bool found = false;
    for(int i = 0; i <= n - m; i++) 
    {
        int j = 0;
        while(j < m && text[i + j] == pattern[j]) j++;
        if(j == m) 
        {
            cout << "Pattern found at index " << i << "\n";
            found = true;
        }
    }
    if(!found) cout << "Pattern not found";
    return 0;
}
