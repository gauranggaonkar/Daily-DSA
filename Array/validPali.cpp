#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char *str;
    char *str2;
    int n, m;

    cout << "Enter a string: ";
    cin >> str;
    
    str = new char[n];

    for(int i=0; i<n; i++) {
        if(str[i] == isalnum()) {
            str2 = new char[m];
        }
    }
    
    cout << str2 << endl;

    return 0;
}
