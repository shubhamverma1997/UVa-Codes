//Bingo!
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int a[100],flag,um[100];
	int n,b;
	while(1)
	{
		flag=1;
		memset(um,0,100*sizeof(int));
		scanf("%d",&n);
		scanf("%d",&b);

		if(n==0 && b==0)
			break;

		for(register int i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+b);
		for(register int i=0;i<b;i++)
		{
			for(register int j=i;j>=0;j--)
			{
				um[a[i]-a[j]]=1;
			}
		}
		for(int i=0;i<=n;i++)
		{
			if(um[i]==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			printf("N\n");
		else
			printf("Y\n");

	}
}