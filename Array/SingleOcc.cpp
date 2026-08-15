#include <iostream>
using namespace std;

int singleOcc(int arr[], int n) {
    int single;
    for(int i=0; i<n; i++) {
        int k = arr[i];
        int count = 0;

        for(int j=0; j<n; j++) {
            if(arr[j] == k) {
                count++;
            }
        }
        if(count == 1) return k;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,4,1,3,3,4};
    int n = 7;

    cout << singleOcc(arr,n) << endl;

    return 0;
}
