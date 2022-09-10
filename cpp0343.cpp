#include<bits/stdc++.h>
using namespace std;

void check(string s) 
{
	int c=0,l=0;
	stringstream ss(s);
	string sss;
	while(ss >> sss) 
	{
		int temp=sss[0]-'0';
		for(int i=1;i<sss.length();i++)
		{
			temp=temp*10+sss[i]-'0';
		}
		if(temp%2==0) c++;
		else l++;
	}
	if(c>l) cout << "YES";
	else if(l>c) cout << "YES";
	else cout << "NO";
	cout << "\n";
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
		getline(cin,s);
		check(s);
	}
 	return 0;
}
