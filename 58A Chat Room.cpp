#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int n=str.length();
	string correct="hello";
	int a=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]==correct[a])
		{
			a++;
		}	
	}
	if(a==correct.length())
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	
	return 0 ;
}
