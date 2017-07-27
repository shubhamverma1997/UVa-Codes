//Summing Digits
#include<iostream>
using namespace std;
int main()
{
	long long int n,sum,tsum=0;
	while(1)
	{
		sum=0;
		tsum=0;
		scanf("%lld",&n);
		if(n==0)
			break;
		do
		{
			tsum=0;
			while(n!=0)
			{
				tsum+=n%10;
				n=n/10;
			}
			if(tsum<10)
				break;
			else
				n=tsum;
		}
		while(1);

		printf("%lld\n",tsum);
	}
}