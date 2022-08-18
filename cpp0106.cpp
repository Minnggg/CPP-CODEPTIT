#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
	int l=0,r=s.length()-1;
	while(l<=r)
	{
		if(s[l]!=s[r]) return 0;
		else
		{
			l++;
			r--;
		}
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
