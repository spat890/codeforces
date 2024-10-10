#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int up=0,lo=0;
	int l=str.length();
	
	for(int i=0;i<l;i++)
	{
		if(isupper(str[i]))
		{
			up++;
		}
		
		else
		{
			lo++;
		}
	}
	
	if(up>lo)
	{
		transform(str.begin(), str.end(), str.begin(), ::toupper);	
	}
	
	else
	{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	}
	
	cout<<str;
	 
	return 0;
}
