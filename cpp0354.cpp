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
		int cnt=1;
		int a[26]={};
		vector<char> vt;
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-'A']++;
			if(i==0) vt.push_back(s[i]);
			else if(s[i]!=vt[vt.size()-1]) vt.push_back(s[i]);
		}
		for(int i=0;i<vt.size();i++) cout << vt[i] << a[vt[i]-'A'];
		cout <<"\n";
	}
 	return 0;
}
