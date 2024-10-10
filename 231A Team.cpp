#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b,c,d=0;
	while(n--)
	{
		cin>>a>>b>>c;
			if(a+b+c>=2)
			{
				d++;
			}
			else
			{
				continue;
			}
	}
	cout<<d;
	
	return 0;
}
