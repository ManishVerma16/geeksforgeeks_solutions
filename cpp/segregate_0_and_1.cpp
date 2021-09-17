#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	void segregate0and1(int arr[], int n){
		// sort(arr, arr+n);
		int flag_0=0, flag_1=0;
		for (int i = 0; i < n; i++)
		{
			if(arr[i] == 0){
				flag_0 += 1;
			}
			else{
				flag_1 += 1;
			}
		}
		for (int i = 0; i < flag_0; i++)
		{
			arr[i] = 0;
		}
		for (int i = flag_0; i < n; i++)
		{
			arr[i] = 1;
		}
	}
	
};

int main()
{
	int t;
	cin>> t;
	while(t--){
		int n;
		cin >>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		Solution obj;
		obj.segregate0and1(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
