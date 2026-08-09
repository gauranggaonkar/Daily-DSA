#include <iostream>
using namespace std;

class Solution {
    public: 
    void Rotate(int arr[], int n, int k) {
        int* temp = new int[k];

        for(int i=0; i<k; i++) {
            temp[i] = arr[i];
        }

        for(int i=k; i<n; i++) {
            arr[i-k] = arr[i];
        }

        for(int i=0; i<k; i++) {
            arr[n-k+i] = temp[i];
        }
    }

    void printArray(int arr[], int n) {
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution Sol;

    int arr[] = {2,3,5,7,11,13,17,19};
    int n = 8;

    int k = 3;

    Sol.Rotate(arr, n, k);
    Sol.printArray(arr, n);

    return 0;
}
