#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		int RedOrGreen(int N, string S){
			int r_count = 0, g_count=0;
			for(int i = 0; i < N; i++)
			{
				if (S[i]=='R')
				{
					r_count += 1;
				}
				else{
					g_count += 1;
				}
			}
			return std::min(r_count, g_count);			
		}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		string S;
		cin >> S;
		Solution obj;
		cout << obj.RedOrGreen(N, S)<<endl;
	}
	return 0;
	
	return 0;
}
