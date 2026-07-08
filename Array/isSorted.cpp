#include <iostream>
using namespace std;

class Solution {
    public: 
    bool isSorted(int arr[], int n) {
        for(int i=1; i<n; i++) {
            if(arr[i] < arr[i-1]) {
                return false;
                break;
            }
        }
        return true;
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
    

    if(Sol.isSorted(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";
        
    return 0;
}
