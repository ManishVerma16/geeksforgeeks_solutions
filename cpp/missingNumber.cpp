#include <iostream>

using namespace std;


int MissingNumbers(int arr, int n){
	int total = 0, s = 0;
	for (int i = 0; i < n; ++i)
	{
		total += arr[i];
	}
	s = (n*(n+1))/2;
	return s-total;
}

int main()
{
	int 
	return 0;
}
