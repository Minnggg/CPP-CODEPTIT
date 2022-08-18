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
		string s ;
		cin >> s;
		if(s[s.length()-1]=='6'&&s[s.length()-2]=='8') cout << "1\n";
		else cout << "0\n";
	}
 	return 0;
}
