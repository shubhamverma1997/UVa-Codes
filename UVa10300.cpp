//Ecological Premium
#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,b,c,sum;
	scanf("%lld",&t);
	while(t)
	{
		sum=0;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			scanf("%lld",&b);
			scanf("%lld",&c);
			sum+=a*c;
		}
		printf("%lld\n",sum);
		t--;
	}
} 