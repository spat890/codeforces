#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,no=0,x;
	cin>>n>>k;
	vector<int> marks;
	
	for(int i=0;i<n;i++)
	{
		cin>>x;
		marks.push_back(x);
	}	
		for(int i=0;i<n;i++)
		{
			if(marks[i]>0)
			{
				if(marks[i]>=marks[k-1])
				{
					no++;
				}
			}
		}
	cout<<no;
	return 0;
}
