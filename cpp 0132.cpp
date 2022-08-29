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
		long long n;
		cin >> n;
		stack<int> st;
		int long sqr=sqrt(n);
		for(int i=2;i<=sqr;i++)
		{
			if(n%i==0) 
			{
				while(n%i==0)
				{
					n/=i;
				}
				st.push(i);
			}
		}
		if(n!=1) st.push(n);
		cout << st.top() << "\n";
	}
 	return 0;
}
