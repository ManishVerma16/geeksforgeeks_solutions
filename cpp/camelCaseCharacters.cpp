#include<bits/stdc++.h>

using namespace std;

class Solution{
	public:
		int countCamelCase(string s){
			int count = 0;
			for (int i = 0; s[i] != '\0'; i++)
			{
				if(s[i]>=65 && s[i]<=90){
					count += 1;
				}
			}
			return count;			
		}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		Solution obj;
		cout << obj.countCamelCase(s) << endl;
	}
	
	return 0;
}
