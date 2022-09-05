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
		int check[1000]={};
		for(int i=0;i<s.length();i++)
		{
			check[s[i]]++;
		} 
		for(int i=0;i<s.length();i++)
		{
			if(check[s[i]]==1) cout << s[i];
		} 
		cout << "\n";
		
	}
 	return 0;
}
