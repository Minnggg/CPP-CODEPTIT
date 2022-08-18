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
		for(int i=0;i<s.length()-2;i++)
		{
			if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4') 
			{
				s[i]='.';
				s[i+1]='.';
				s[i+2]='.';
				break;
			}
		}
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='.') cout << s[i];
		}
		cout << "\n";
	}
 	return 0;
}
