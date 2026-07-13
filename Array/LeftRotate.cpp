#include <iostream>
using namespace std;
	
void LeftRotate(int arr[], int n) {
	int temp = arr[0];

	for(int i=0; i<n; i++) {
		arr[i] = arr[i+1];
	}

	arr[n-1] = temp;
}

void display(int arr[], int n) {
	for(int i=0; i<n; i++) 
		cout << arr[i] << " ";
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

	display(arr, n);

	LeftRotate(arr, n);
	display(arr, n);
	 
	return 0;
}
