#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a=0;
	cin>>n;
	int arr1[n];
	int arr2[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i]>>arr2[i];
		
		if(arr1[i]+2<=arr2[i])
		{
			a++;
		}
	}
	
	cout<<a<<endl;
	
	return 0;
	
}

