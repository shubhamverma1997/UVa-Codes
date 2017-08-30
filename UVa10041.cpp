//Vito's Family
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int arr[501],t,n,ma,mi,sum,temp;
	scanf("%lld",&t);
	while(t)
	{
		ma=-1;
		mi=10000000000;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			ma=max(ma,arr[i]);
			mi=min(mi,arr[i]);
		}
		sum=100000000000000;
		for(register long long int i=mi;i<=ma;i++)
		{
			temp=0;
			for(register long long int j=0;j<n;j++)
			{
				temp+=abs(i-arr[j]);
			}
			sum=min(sum,temp);
		}
		printf("%lld\n",sum);
		t--;
	}
}