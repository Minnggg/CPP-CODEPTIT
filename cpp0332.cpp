#include<bits/stdc++.h>
using namespace std;

string chuanhoa(string s)
{
	for(int i=0;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	getline(cin,s);
	s=chuanhoa(s);
	vector<string> vt;
	stringstream ss(s);
	while(ss >> s) 
	{
		vt.push_back(s);
	}
	int temp=vt.size()-1;
	cout << vt[temp];
	for(int i=0;i<temp;i++) cout << vt[i][0];
	cout <<"@ptit.edu.vn";
 	return 0;
}
