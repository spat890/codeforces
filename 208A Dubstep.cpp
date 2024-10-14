#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string a;
	int i=0;
	int n=s.length();
	
	while(i<s.length())
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
			i=i+2;
			cout<<" ";
		}
		else
		{
			cout<<s[i];
		}
		i=i+1;
	}
	
	cout<<a;
	
	return 0;
}
