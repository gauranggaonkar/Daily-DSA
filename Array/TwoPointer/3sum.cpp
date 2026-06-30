#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;

        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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

    for(int i =0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;

    bubblesort(arr, n);
    printArray(arr, n);

    bool found = false;
    
    for(int i=0; i<n-2; i++) {
        int left = i+1;
        int right = n-1;
       
        while(left<right) {
            int sum = arr[i] + arr[left] + arr[right];

            if(sum > 0) {
                right--;
            }
            else if(sum < 0) {
                left++;
            }
            else if(sum == 0) {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << " " << endl;
                found = true;
                left++; 
                right --;
            }

        }
    }

    if(!found) {
        cout << "No solution exists\n";
    }
    
    return 0;
}
