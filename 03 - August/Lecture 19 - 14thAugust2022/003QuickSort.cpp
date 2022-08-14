// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int* arr, int s, int e) {

	int pivot = arr[e];
	int j = s;
	int i = s-1;

	while(j < e) {
		if(arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
		j++;
	}

	swap(arr[i+1], arr[e]);
	return i+1;

}

void quickSort(int* arr, int s, int e) {

	// base case
	if(s >= e) {
		return;
	}

	// recursive case

	// 1. partition the arr[s...e] around the pivot
	int p_idx = partition(arr, s, e);

	// 2. quickSort the leftPartition
	quickSort(arr, s, p_idx-1);

	// 3. quickSort the rightPartition
	quickSort(arr, p_idx+1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}