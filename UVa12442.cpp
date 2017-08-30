//Forwarding Emails
#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
long long int adj[50005],co,ma=-1,curr,flag,res[50005];
int vis[50005];
long long int dfs(long long int i)
{
	//cout<<i<<"\n";
	if(vis[i]==1 || i==0)
		return 0;
	vis[i]=1;
	res[i]=1+dfs(adj[i]);
	vis[i]=0;
	return res[i];
}
int main()
{

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	long long int n,a,b,temp,mi;
	scanf("%d",&t);
	temp=1;
	while(t)
	{
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			vis[i+1]=0;
			res[i+1]=-1;
			scanf("%lld",&a);
			scanf("%lld",&b);
			adj[a]=b;
		}
		ma=-1;
		for(register long long int i=1;i<=n;i++)
		{
			if(res[i]==-1)
			{
				res[i]=dfs(i);
			}
			if(res[i]>ma)
			{
				ma=res[i];
				mi=i;
			}
		}
		printf("Case %lld: %lld\n",temp,mi);
		t--;
		temp++;
	}
}