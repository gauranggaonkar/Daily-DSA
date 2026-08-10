#include <iostream>
using namespace std;

class Solution {
    public:
    bool Search(int arr[], int n, int k) {
        for(int i=0; i<n; i++) {
            if(arr[i] == k) {
                cout << "Found at index " << i << endl;
                return true;
            }
        }
        return false;
        if(false) cout << "Not found\n";
    }
};

int main() {
    Solution Sol;

    int arr[] = {2,4,6,8,10};
    int n = 5;
    int k = 0;

    Sol.Search(arr, n, k);

    return 0;
}
