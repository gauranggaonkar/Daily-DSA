#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n <=0) {
        cout << "Invalid Array Size\n";
        return 1;
    }

    int *arr = new int[n];

    cout << "Enter " << n << " numbers: ";

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<n; i++)   
        cout << arr[i] << " ";
    cout << endl;

    int Target;
    cout << "Enter Target Sum: ";
    cin >> Target;
    
    // Finding no. of arrays matching target sum
    int sum = 0;

    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    
    for(int i=0; i<n; i++)   
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
