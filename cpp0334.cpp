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
		int sum=0;
		string temp="0";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='0'&&s[i]<='9') 
			{
				temp+=s[i];
			}
			else 
			{
				int res=stoi(temp);
				sum+=res;
				temp="0";
			}
		}
		int res=stoi(temp);
		sum+=res;
		cout<<sum<<"\n";
	}
 	return 0;
}
