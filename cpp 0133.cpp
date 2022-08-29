#include<iostream>
#include<cmath>

using namespace std;

int nt(int n) 
{
	if(n <= 3) return n > 1;
	else
	{
		if(n % 2 == 0 || n % 3 == 0) return 0;
		else
		{
			int sqr = sqrt(n);
			for(int i = 5; i <= sqr; i += 6)
			{
				if(n % i == 0 || n % (i+2) == 0) return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 2; i <= n; i++)
		{
			if(nt(i)) cout << i << " ";
		}
		cout << endl;			
	}
	return 0;
}