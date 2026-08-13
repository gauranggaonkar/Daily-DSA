#include <iostream>
using namespace std;

class Solution {
    public:
    int missing(int arr[], int n) {
        int total = 0;
        for(int i=0; i<n-1; i++) {
            total += arr[i];
        }

        long long expSum = (n *1LL* (n + 1)) / 2;
        
        return expSum - total; 
    }
};

int main() {
    Solution sol;

    int arr[] = {1,3,2,6,7,9,4,8};
    int n = 9;

    cout << sol.missing(arr, n) << endl;

    return 0;
}
