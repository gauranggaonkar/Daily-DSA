#include <iostream>
#include <cstring>

using namespace std;

class Solution {
    public:
    int LengthOfLongestSubstring(string str) {
        int MaxLength = 0;

        for(int i=0; i<str.length(); i++) {
            bool visited[256] = {false};
            int currentLength = 0;

            for(int j=i; j<str.length(); j++) {
                if(visited[str[j]])
                    break;

                visited[str[j]] = true ;
                currentLength++;

                if(currentLength> MaxLength) 
                    MaxLength = currentLength;
            }
        }
        return MaxLength;
    }
};

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length();

    Solution obj;
    cout << "Length of longest substring= "
    << obj.LengthOfLongestSubstring(str) << endl;
     
    return 0;
}
