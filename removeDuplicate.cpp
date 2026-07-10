#include <iostream> 
using namespace std;

void remove_duplicate(int arr[], int &n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i] != arr[i+1])
            continue;

        if(arr[i] == arr[i+1]) {
            for(int j=i+1; j<n-1; j++) {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
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
    
    remove_duplicate(arr, n);
    printArray(arr, n);
}
