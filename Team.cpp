#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,prob=0;
	cin>>n;
	int a[n][3];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		cin>>a[i][j];
	}
	for(int i=0; i<n; i++)
	{
		int count=0;
		for(int j=0; j<3; j++)
		{
			if(a[i][j]==1)
			count++;
		}
		if(count>=2)
		prob++;
	}
	cout<<prob;
}
