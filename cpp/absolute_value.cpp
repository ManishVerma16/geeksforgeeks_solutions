#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int absoluteValue(int n){
		if(n>=0) return n;
		else return n*(-1);
	}
	
};

int main()
{
	int n, result;
	cin >> n;
	Solution obj;
	result = obj.absoluteValue(n);
	cout<< result;
	return 0;
}

// Method 2 Using builtin method
// int absoluteValue(int n){
// 	return abs(n);
// }