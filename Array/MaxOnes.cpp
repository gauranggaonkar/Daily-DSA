#include <iostream> 
using namespace std;

int MaxOnes(int arr[], int n) {
    int count = 0;
    int Max = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] == 1) {
            count++;
            if(count > Max) 
                Max = count;
        }
        else
            count = 0;
    }
    return Max;
}

int main() {
    int arr[] = {1,0,1,1,0,1,1,0};
    int n = 9;

    cout << MaxOnes(arr, n) << endl;

    return 0;
}
