#include <iostream>

using namespace std;

int main()
{
	int i, x, res=0;
	cin >> x;
	for (int i = 1; i <=x; i++)
	{
		if(i*i <= x){
		res = i;
		}
		// else if(i*i < x){
		// 	res = i;
		// }
	}
	cout<<res;
}