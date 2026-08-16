#include <iostream>
using namespace std;

int maxSubarray(int arr[], int n, int x) {
    int maxC = 0;

    for(int i=0; i<n; ++i) {

        for(int j=i; j<n; ++j) {
            int sum = 0;

            for(int k=i; k<=j; ++k) {
                sum += arr[k];
            }

            if(sum == x) {
                maxC = max(maxC, j-i+1);
            }
        }
    }
    return maxC;
}

int main() {
    int arr[] = {1,-1,1};
    int n = 3;
    int k = 1;

    cout << maxSubarray(arr,n,k) << endl;

    return 0;
}
