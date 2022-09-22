#include<bits/stdc++.h>
using namespace std;

void check(string s) 
{
	int idx=0;
	int c=0,l=0;
	stringstream ss(s);
	string sss;
	while(ss >> s) 
	{
		int temp=stoi(s);
		if(temp%2==0) c++;
		else l++;
		idx++;
	}
	if(c>l&&idx%2==0) cout << "YES";
	else if(l>c&&idx%2==1) cout << "YES";
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
