#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[1000];

    cout << "Enter a string: ";
    cin.getline(str, 1000);
    int n = strlen(str);

    char* str2 = new char[n];
    int j = 0;

    for(int i=0; i<n; i++) {
        if(str[i] >= 48 && str[i]<=57
        || str[i] >= 65 && str[i]<=90
        || str[i] >= 97 && str[i]<= 122) {

            if(str[i] >= 'A' && str[i] <= 'Z') {
                str2[j] = str[i] + 32;
            }
            else {
                str2[j] = str[i];
            }
            j++;
        }
    }   
    
    int m = j;

    int start = 0;
    int end = m-1;

    bool isPalindrome = true;

    while(start < end) {
        if(str2[start] != str2[end]) {
            isPalindrome = false; 
            break;
      }

        start++;
        end--;
    }

    if(isPalindrome) {
        cout << "Valid Palindrome\n";
    }
    else {
        cout << "Not a Palindrome\n";
    }

    delete[] str2;

    return 0;
}
