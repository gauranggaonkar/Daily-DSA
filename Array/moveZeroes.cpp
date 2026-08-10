#include <iostream>
using namespace std;

class Solution {
    public:
    void move(int arr[], int n) {
        int j = -1;

        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                j = i;
                break;
            }
        }

        if(j == -1) return;

        for(int i = j+1; i<n; i++) {
            if(arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;

    int arr[] = {1,0,2,5,0,0,3,0,1,3};
    int n = 10;

    sol.move(arr, n);

    for(int array: arr) cout << array << " ";
    cout << endl;
    
    return 0;
}

