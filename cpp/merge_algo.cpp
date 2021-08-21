#include <iostream>

using namespace std;

void merge(int arr1[], int arr2[], int m, int n);

int main()
{
	int arr_A[] = {2, 8, 15, 18, 20};
	int arr_B[] = {5, 9, 12, 17, 19, 21};
	int m,n;
	m = sizeof(arr_A)/sizeof(int);
	n = sizeof(arr_B)/sizeof(int);
	merge(arr_A, arr_B, m, n);
	return 0;
}

void merge(int arr1[], int arr2[], int m, int n){
	int arr[m+n], i=0, j=0, k=0;
	while(i<m && j<n){
		if (arr1[i] < arr2[j])
		{
			arr[k++] = arr1[i++];
		}
		else{
			arr[k++] = arr2[j++];
		}
	}
	for (; i < m; i++)
	{
		arr[k++] = arr1[i];
	}
	for (; j < n; j++)
	{
		arr[k++] = arr2[j];	
	}
	for (int i = 0; i < m+n; i++)
	{
		printf("%d ", arr[i]);
	}
}
