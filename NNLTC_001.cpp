#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	getline(cin,s);
	stringstream ss(s);
	int a[100000]={};
	int b[100000]={};
	int idx=0;
	while(ss>>s)
	{
		int temp=stoi(s);
		a[temp]++;
		b[idx]=temp;
		idx++;
	}
	for(int i=0;i<idx;i++)
	{
		if(a[b[i]]!=0)
		{
			cout << b[i] <<" "<<a[b[i]] << "\n";
			a[b[i]]=0;
		}
		
	}
 	return 0;
}
