#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,r;
	cin>>n>>k;
	
	for(int i=1;i<=k;i++)
	{
		r=n%10;
		
		if(r==0)
		{
			n/=10;
		}
		else
		{
			n-=1;
		}
	}
	
	cout<<n;
	
	return 0;
}
