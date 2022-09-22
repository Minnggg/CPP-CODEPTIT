#include<bits/stdc++.h>
using namespace std;

string chuanhoa(string s)
{
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++)
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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n==1)
		{
		    cin.ignore();
			string s;
			getline(cin,s);
			stringstream ss(s);
			vector<string> st;
			while(ss >> s)
			{
				s=chuanhoa(s);
				st.push_back(s);
			}
			cout << st[st.size()-1]<<" ";	
			for(int i=0;i<st.size()-1;i++) cout << st[i] <<" ";
			cout << "\n";
			
		}
		else
		{
		    cin.ignore();
			string s;
			getline(cin,s);
			stringstream ss(s);
			vector<string> st;
			while(ss >> s)
			{
				s=chuanhoa(s);
				st.push_back(s);
			}
			for(int i=1;i<st.size();i++) cout << st[i] << " ";
			cout << st[0] << "\n";
		}
		
	} 
 	return 0;
}
