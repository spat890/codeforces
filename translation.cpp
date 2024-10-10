#include<bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
	string s;
	string t;
	cin>>s;
	cin>>t;
	string rev(s.rbegin(),s.rend());
	if(rev==t)
	{
		cout<<"YES";
	}
	
	else
	{
		cout<<"NO";
	}
	return 0;
	
}
