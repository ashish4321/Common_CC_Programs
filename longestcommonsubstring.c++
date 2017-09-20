#include <bits/stdc++.h>
using namespace std;

void getlcs(string s1,string s2,int m,int n)
{
	int L[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			
			if(i==0 || j==0)
			L[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			L[i][j]=L[i-1][j-1]+1;
			else
			L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	int index=L[m][n];
	char lcs[index+1];
	lcs[index]='\0';
	int i=m;
	int j=n;
	while(i>0 && j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			lcs[index-1]=s1[i-1];
			i--;
			j--;
			index--;
		}
		else if(L[i-1][j]>L[i][j-1])
		i--;
		else
		j--;
	}
	cout<<lcs;
}

int main()
{
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	getlcs(s1,s2,l1,l2);
	return 0;
}