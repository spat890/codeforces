#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l,x,y,z,a=0,b=0,c=0;
	cin>>l;
	

		
	
	for(int i=0;i<l;i++)
	{
		cin>>x>>y>>z;
		a+=x;
		b+=y;
		c+=z;
	}
	if(a==0&&b==0&&c==0)
	{
		cout<<"YES"<<endl;
	}
	
	else
	{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
