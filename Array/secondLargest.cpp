#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int SecondLargest(int arr[], int n) {
        if(n<2)
            return -1;

        int largest = INT_MIN;
        int second_largest = INT_MIN;

        for (int i=0; i<n; i++) {
            if(largest < arr[i]) {
                second_largest = largest;
                largest = arr[i];
            }

            else if(second_largest < arr[i] && arr[i] != largest) {
                second_largest = arr[i];
            }   
        }
        return second_largest;
    }
};

int main() {
    Solution Sol;

    int arr[100];
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    cout << Sol.SecondLargest(arr, n) << endl;

    return 0;
}
