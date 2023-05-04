#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
	int start = 0;
	int end = n-1;
	int mid;

	while(start<=end){
		mid = (start + end) / 2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			end = mid - 1 ;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;
}

int main(){

int arr[] = {1,5,7,9,10,15,19};

int index = binary_search(arr, 7, 19);

cout<<"Found at index : " << index << endl;

}
