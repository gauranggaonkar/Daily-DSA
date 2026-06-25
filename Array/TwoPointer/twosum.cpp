#include <iostream>
using namespace std;

int main() {
    int *arr;
    int n;

    // Taking user input
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";

    arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    /*for(int i=0; i<n; i++) {
        if(arr[i] > arr[i+1]) {
            cout << "Enter Sorted Array/n";
            return 0;
        }
    }*/

    for(int i =0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    
    int target;
    cout << "Enter target sum: ";
    cin >> target;
    cout << "The target sum is: " << target << endl;
    
    int start = 0;
    int end = n-1;

    while(start < end) {
        int sum = arr[start] + arr[end];
        if(sum == target) {
            cout << "The indices are: " << start+1 << "," << end+1 << endl;
            break;
        }

        else if(sum > target) {
            end--;
        }

        else {
            start++;
        }
    }

    return 0;
}
