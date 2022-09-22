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
		int n;
		cin >> n;
		string s;
		cin.ignore();
		getline(cin,s);
		int a[10]={};
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0') a[0]++;
			if(s[i]=='1') a[1]++;
			if(s[i]=='2') a[2]++;
			if(s[i]=='3') a[3]++;
			if(s[i]=='5') a[5]++;
			if(s[i]=='4') a[4]++;
			if(s[i]=='6') a[6]++;
			if(s[i]=='7') a[7]++;
			if(s[i]=='8') a[8]++;
			if(s[i]=='9') a[9]++;
		}
		for(int i=0;i<=9;i++) if(a[i]!=0) cout << i << " ";
		cout << "\n";
	}
 	return 0;
}
