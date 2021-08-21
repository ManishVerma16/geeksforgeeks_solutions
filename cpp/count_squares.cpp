#include <iostream>

using namespace std;
int countSquares(int N);
int main()
{
	int i, x, res=0;
	cin >> x;
	res = countSquares(x);
	cout<<res;
}

int countSquares(int N){
	int count = 0;
	for (int i = 1; i <=N; i++)
	{
		if(i*i < N){
			count++;
		}
		else break;
	}
	return count;
}


/*

for (int i = 1; i <=x; i++)
	{
		if(i*i == x){
		res = i;
		break;
		}
		else if(i*i <= x){
			res = i;
		}
	}
*/