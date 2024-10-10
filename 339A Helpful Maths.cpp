#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n= s.length();
	
	int one=0,two=0,three=0;
	for(int i=0;i<n;i+=2)
	{
		if(s[i]=='1')
		{
			one++;
		}
		else if(s[i]=='2')
		{
			two++;
		}
		else if(s[i]=='3')
		{
			three++;
		}	
	}
	
	string res="";
	for(int i=0;i<one;++i)
	{
		res=res+"1+";
	}
	for(int i=0;i<two;++i)
	{
		res=res+"2+";
	}
	for(int i=0;i<three;++i)
	{
		res=res+"3+";
	}
	
	for(int i=0;i<res.size()-1;++i)
	{
		cout<<res[i];
	}
	return 0;
}

