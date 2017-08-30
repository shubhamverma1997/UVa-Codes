//Closest Sums
#include <iostream>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int t,n,q,a[1004],num,sum;
	t=1;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
			break;
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		printf("Case %lld:\n",t);
		scanf("%lld",&q);
		for(register long long int i=0;i<q;i++)
		{
			scanf("%lld",&num);
			sum=10000000000000000;
			for(register long long int j=0;j<n-1;j++)
			{
				for(register long long int k=j+1;k<n;k++)
				{
					if(abs(a[j]+a[k]-num)<abs(sum-num))
						sum=abs(a[j]+a[k]);
				}
			}
			printf("Closest sum to %lld is %lld.\n",num,sum);

		}
		t++;
	}
}