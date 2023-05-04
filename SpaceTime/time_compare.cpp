#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back

int32_t main(){
	int n;
	cin>> n;
	std::vector<int> arr(n,0);

	//Init
	for (int i = 0; i < n; ++i)
	{
		arr[i] = n-i;
	}

	auto start_time = clock();
	sort(arr.begin(), arr.end());
	auto end_time = clock();

	cout << end_time - start_time << endl;

	return 0;
}
