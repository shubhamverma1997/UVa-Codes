//Blowing Fuses
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int con[25];
	int state[25];
	int t=1,n,m,c,sum,maxnow,a,flag;
	while(1)
	{
		flag=1;
		sum=0;
		maxnow=0;
		scanf("%d",&n);
		scanf("%d",&m);
		scanf("%d",&c);
		if(n==0 && m==0 && c==0)
			break;
		memset(state,0,25*sizeof(int) );
		for(register int i=1;i<=n;i++)
		{
			scanf("%d",&con[i]);
		}

		for(register int i=0;i<m;i++)
		{
			scanf("%d",&a);

			state[a]=1-state[a];

			if(state[a]==0)
				sum-=con[a];
			else
				sum+=con[a];

			if(sum>c)
			{
				flag=0;
			}

			maxnow=max(sum,maxnow);

		}
		if(flag==0)
		{
			printf("Sequence %d\n",t);
			printf("Fuse was blown.\n\n");
		}
		else
		{
			printf("Sequence %d\n",t);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n\n",maxnow);
		}

		t++;
	}
}