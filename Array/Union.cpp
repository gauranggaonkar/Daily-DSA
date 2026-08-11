#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> Union(int arr1[], int arr2[], int n, int m) {
        vector<int> main;
        int i = 0, j = 0;

        while(i<n && j<m) {
            if(arr1[i] < arr2[j]) {
                if(main.empty() || main.back() != arr1[i])
                    main.push_back(arr1[i]);
                i++;
                }
           
            else if(arr2[j] < arr1[i]) {
                if(main.empty() || main.back() != arr2[j]) 
                    main.push_back(arr2[j]);
                j++;
            }
            
            else {
                if(main.empty() || main.back() != arr1[i]) 
                    main.push_back(arr1[i]);
                i++; j++;
            }
        }
            
        while (i < n) {
            if (main.empty() || main.back() != arr1[i])
                main.push_back(arr1[i]);
            i++;
        }

        while (j < m) {
            if (main.empty() || main.back() != arr2[j])
                main.push_back(arr2[j]);
            j++;
        }
            
        return main;
    }
};

int main() {
    Solution Sol;

    int arr1[] = {2,3,5,7,11};
    int n = 5;
    int arr2[] = {1,3,5,7,9};
    int m = 5;

    vector<int> Result = Sol.Union(arr1, arr2, n, m);

    cout << "Union: ";
    for(int val: Result) cout << val << " ";
    cout << endl;
    return 0;
}
