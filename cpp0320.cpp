#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
	int a[10]={};
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0') a[0]++;
		else if(s[i]=='1') a[1]++;
		else if(s[i]=='2') a[2]++;
		else if(s[i]=='3') a[3]++;
		else if(s[i]=='4') a[4]++;
		else if(s[i]=='5') a[5]++;
		else if(s[i]=='6') a[6]++;
		else if(s[i]=='7') a[7]++;
		else if(s[i]=='8') a[8]++;
		else if(s[i]=='9') a[9]++;
		else return -1;
	}
	for(int i=0;i<=9;i++) if(a[i]==0) return 0;
	return 1;
}




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
		if(check(s)==1) cout << "YES\n";
		else if(check(s)==0) cout <<"NO\n";
		else if(check(s)==-1) cout <<"INVALID\n";
	}
 	return 0;
}
