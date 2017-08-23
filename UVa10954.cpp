//Add All
#include<iostream>
#include<queue>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
	ll n,a,sum,ans;
	while(1)
	{
		sum=0;
		ans=0;
		priority_queue< ll,vector< ll > ,greater< ll > > pq;
		scanf("%lld",&n);
		if(n==0)
			break;
		for(register ll i=0;i<n;i++)
		{
			scanf("%lld",&a);
			pq.push(a);
		}

		while(1)
		{
			sum=pq.top();
			pq.pop();
			if(!pq.empty())
			{
				sum+=pq.top();
				pq.pop();
				ans+=sum;
				pq.push(sum);
			}
			else
			{
				break;
			}
		}
		//printf("\n");
		printf("%lld\n",ans);
	}
}