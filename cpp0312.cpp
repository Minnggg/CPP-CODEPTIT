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
		cin.ignore();
		string s;
		int K;
		cin >> s >> K;
		set<char> ss;
		for(int i=0;i<s.length();i++)
		{
			ss.insert(s[i]);
		}
		if(26-ss.size()<=K) cout << "1\n";
		else cout << "0\n";
	}
 	return 0;
}
