#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target) {
    if(low>high) return -1;
    
    int mid = (low+high)/2;
    
    if(target == arr[mid]) return mid;

    else if(target > arr[mid]) 
        return BinarySearch(arr, mid+1, high, target);
    
    else
        return BinarySearch(arr, low, mid-1, target);
}

int main() {
    int arr[] = {1,3,5,7,9,11,13,15,17,19};
    int n = 10;
    int target = 10;

    int result = BinarySearch(arr, 0, n-1, target);

    if(result == -1) cout << "not found\n";
    else cout << "Target is at index " << result << endl;

    return 0;
}
