# include <bits/stdc++.h>
# include <string>
using namespace std;

int main()
{
	string str,t;
	cin>>str;
	int l=str.length();
	
	transform(str.begin(), str.end(), str.begin(), ::tolower); 
	
	for(int i=0;i<l;++i)
	{
		if(str[i]=='a'||str[i]=='o'||str[i]=='y'||str[i]=='e'||str[i]=='u'||str[i]=='i')
		{
			continue;
		}
		
		else
		{
			t=t+".";
			t=t+str[i];
		}
	}
	
	cout<<t<<endl;
	return 0;
}


