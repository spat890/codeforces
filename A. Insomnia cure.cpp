#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,l,n,m,d;
	cin>>k>>l>>n>>m>>d;
	int c=0;
	for(int i=1;i<=d;i++)
	{
		if(i%k==0||i%l==0||i%n==0||i%m==0)
		{
			c++;
		}
	}
	
	cout<<c<<endl;
	
	return 0;
}
