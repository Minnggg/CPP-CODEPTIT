#include<bits/stdc++.h>
using namespace std;

int check1(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')%2==1) return 0;
	}
	return 1;
}

int check2(string s)
{
	int l=0,r=s.length()-1;
	while(l<=r) 
	{
		if(s[l]!=s[r]) return 0;
		l++;
		r--;
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
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		if(check1(s)&&check2(s)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
 	return 0;
}
