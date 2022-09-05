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
	while(t--)
	{
		string s,dl;
		getline(cin,s);
		cin >> dl;
		stringstream ss(s);
		while(ss >> s)
		{
			if(s!=dl) cout << s << " ";
		} 
		cout << "\n";
		
	}
 	return 0;
}
