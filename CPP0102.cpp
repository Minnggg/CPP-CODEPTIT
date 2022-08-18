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
		char a;
		cin >> a;
		if(a<='Z'&&a>='A') cout << (char)tolower(a) << "\n";
		else cout << (char)toupper(a) << "\n";
	}
 	return 0;
}
