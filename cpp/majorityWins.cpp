#include <bits/stdc++.h>

using namespace std;

int majorityWins(int arr[], int n, int x, int y){
	int count_x=0, count_y=0, index_x=0, index_y=0;

	for (int i = 0; i < n; i++)
		if (arr[i] == x)
		{
			count_x++;
			index_x = i;
		}
	for (int j = 0; j < n; j++)
		if (arr[j] == y)
		{
			count_y++;
			index_y = j;
		}
	if (count_x == 0 && count_y == 0)
	{
		if (x < y) return x;
		else return y;
	}
	// if (count_x == 0) return x;
	// if (count_y == 0) return y;

	if (count_x < count_y)
		return arr[index_y];
	else if (count_x == count_y)
		if (arr[index_x] < arr[index_y])
			return arr[index_x];
		else return arr[index_y];
	else return arr[index_x];
}

int main()
{
	int n, i, x=0, y=0, index=0;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x >> y;
	sort(arr, arr + n);
	cout << majorityWins(arr, n, x, y) << endl;
	return 0;
}