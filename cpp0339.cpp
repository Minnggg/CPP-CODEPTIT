#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int sum=s.length();
		for(int i=0;i<s.length()-1;i++)
		{
			for(int j=i+1;j<s.length();j++) if(s[i]==s[j]) sum++;
		}
		cout << sum << "\n";
	}
 	return 0;
}
