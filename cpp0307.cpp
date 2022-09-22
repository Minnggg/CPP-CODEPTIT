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
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		string a[1000]={};
		int idx=0;
		stringstream ss(s2);
		while(ss>>s2)
		{
			a[idx]=s2;
			idx++;
		}
		set<string> ans;
		int idxans=0;
		stringstream sss(s1);
		while(sss>>s1)
		{
			int check=1;
			for(int i=0;i<idx;i++)
			{
				if(s1==a[i]) 
				{
					check=0;
					break;
				}
			}
			if(check==1)
			{
			    ans.insert(s1);
			}
		}
		for(auto x : ans) 
		{
		    cout<<x<<" ";
		}
		cout <<"\n";
	}
 	return 0;
}
