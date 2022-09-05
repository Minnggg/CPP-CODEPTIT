#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
	int sumc=0,suml=0;
	for(int i=0;i<s.length();i++)
	{
		if(i%2==1) suml+=(s[i]-'0');
		else sumc+=(s[i]-'0');
	}
	if(abs(sumc-suml)%11==0) return 1;
	else return 0;
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
		cout << check(s) << "\n";
	}
 	return 0;
}
