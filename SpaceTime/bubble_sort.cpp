#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

#define F first
#define S second
#define pb push_back

bool compare(int a, int b){
	return a > b;
}

void bubble_sort(vector<int> &a, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(compare(a[j],a[j+1])){
				swap(a[j],a[j+1]);
			}

		}
	}
}

int main(){

	int n = 20;

	std::vector<int> arr(n,0);

	for (int i = 0; i < n; ++i)
	{
		arr[i] = n-i;
	}


	auto start_time = clock();
	bubble_sort(arr,n);
	auto end_time = clock();

	for (int i=0; i<arr.size(); ++i){
    		std::cout <<"Number at index "<< i << "is : " << arr[i] <<endl;
	}

	cout << end_time - start_time << endl;

	return 0;
}
