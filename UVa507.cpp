//Jill Rides Again
//Dynamic Programming
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int r,rc=1,s[20004],stops,sum,ans,startindex,stopindex;
	scanf("%lld",&r);
	while(r)
	{
		sum=0;
		ans=0;
		scanf("%lld",&stops);
		for(register long long int i=0;i<stops-1;i++)
		{
			scanf("%lld",&s[i]);
		}
		for(register long long int i=0;i<stops-1;i++)
		{
			sum+=s[i];
			ans=max(ans,sum);
			if(sum<0)
			{
				sum=0;
			}
		}
		sum=0;
		long long int temp=0,maxdif=-1,tst,tsp,flag=0;

		startindex=0;
		stopindex=0;
		tst=0;
		tsp=0;
		for(register long long int i=0;i<stops-1;i++)
		{
			if(s[i]>0)
				flag=1;
			sum+=s[i];
			if(temp<=sum)
			{
				temp=sum;
				tsp=i;
			}
			temp=max(temp,sum);
			if(sum<0)
			{
				tst=i+1;
				tsp=i+1;
				sum=0;
			}
			if (ans==temp)
			{
				if(tsp-tst>maxdif)
				{
					maxdif=tsp-tst;
					startindex=tst;
					stopindex=tsp;
				}
				/* code */
			}
		}
		if(flag==1)
		printf("The nicest part of route %lld is between stops %lld and %lld\n",rc,startindex+1,stopindex+2);
		else
			printf("Route %lld has no nice parts\n",rc);

		rc++;
		r--;
	}
}