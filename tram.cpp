#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,r=0,l=0;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		
		r-=a;
		r+=b;
		if(r>l)
		{
			l=r;
		}
	}
	cout<<l<<endl;
	
	return 0;
}
