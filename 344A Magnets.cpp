#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a=0;
	int arr[100000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
		{
			if(arr[i]!=arr[i+1])
			{
				a++;
			}
		}
	cout<<a<<endl;
	return 0;
	
}
