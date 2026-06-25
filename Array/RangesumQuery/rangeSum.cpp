#include <iostream>
#include <vector>

using namespace std;

class NumArray {
    private:
    int* arr;
    int size;
    int capacity;
    
    public:
    NumArray(int cap) {
        arr = new int[cap];
        size = 0;
        capacity = cap;
    }

    int sumRange(int left, int right) {
        int i = left;
        int totalSum = 0;
            
        for(int i=left; i<=right; i++) {
           totalSum += arr[i];
        }

        return totalSum;
    }
    
    void append(int x) {
        arr[size] = x;
        size++;
    }

    ~NumArray() {
        delete[] arr;
    }
};

int main() {
    NumArray nums(50);
    for(int i=1; i<11; i++) {
        nums.append(2*i);
    }

    int left, right;

    cout << "Enter left value: ";
    cin >> left;
    if(left<0 || left>right) 
        cout << "Enter valid number\n";
    
    cout << "Enter right value: ";
    cin >> right;
    if(right<left || right>11)
        cout << "Enter valid number\n";

    cout << "The total sum is: " << nums.sumRange(left, right) << endl;
}

