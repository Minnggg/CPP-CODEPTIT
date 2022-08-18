#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i+1]==s[i]+1||s[i+1]==s[i]-1) continue;
		else return 0;
	}
	return 1;
}



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
		if(check(s)==1) cout << "YES\n";
		else cout << "NO\n";
	}
 	return 0;
}
