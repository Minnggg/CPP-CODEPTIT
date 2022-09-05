#include<bits/stdc++.h>
using namespace std;
void chuanhoa1(string s)
{
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++) s[i]=tolower(s[i]);
	cout << s <<"";
}

void chuanhoa2(string s)
{
	for(int i=0;i<s.length();i++) s[i]=toupper(s[i]);
	cout << s;
}


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	getline(cin,s);
	stringstream ss(s);
	vector<string> vt;
	while(ss>>s)
	{
		vt.push_back(s);
	}
	for(int i=0;i<vt.size()-1;i++)
	{
		chuanhoa1(vt[i]);
		if(i!=vt.size()-2) cout << " ";
	}
	cout <<", ";
	chuanhoa2(vt[vt.size()-1]);
 	return 0;
}
