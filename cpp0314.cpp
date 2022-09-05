#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	set<string> ss;
	while(t--)
	{
		string s;
		getline(cin,s);
		ss.insert(s);
	} 
	cout << ss.size();
 	return 0;
}
