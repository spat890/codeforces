#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,w;
	cin>>k>>n>>w;
	int temp=0;
	for(int i=1;i<=w;i++)
	{
		
		temp=temp+k*i;
		
	}
	if(temp>n)
	{
		cout<<temp-n;
	}
	if(temp<=n)
	{
		cout<<"0";
	}
	return 0;
}
