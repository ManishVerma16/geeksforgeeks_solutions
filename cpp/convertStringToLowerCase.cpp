#include<iostream>

using namespace std;

class Solution {
	public:
		string tolower(string S){
			for (int i = 0; S[i] != '\0'; i++)
			{
				if(S[i]>=65 && S[i]<=90){
					S[i] += 32;
				}
			}
			return S;
		}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string S;
		cin >> S;
		Solution obj;
		cout << obj.tolower(S) << endl;
	}
	
	return 0;
}
