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

    for(int i =0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    
    int k;
    cout << "Enter k: ";
    cin >> k;

    if(k > n) {
        cout << "Invalid k value\n";
        cin >> k;
    }

    int sum;
    double average;
    double max_ave = -1e9;

    for(int i=0; i<(n-k+1); i++) {
        sum = 0;

        for(int j=i; j<i+k; j++) {
            sum += arr[j];
        }

        average = (double)sum / k;

        if(average > max_ave) {
            max_ave = average;
        }
    }

    cout << "Max Average: " << max_ave;
    
    delete[] arr;

    return 0;
}
