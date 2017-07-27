//Tariff Plan
#include<iostream>
using namespace std;
int main()
{
	int t,n,a,temp=1,summ,sumj;
	scanf("%d",&t);
	while(t)
	{
		summ=0;
		sumj=0;
		scanf("%d",&n);
		while(n)
		{
			scanf("%d",&a);
			summ+=(a/30+1)*10;
			sumj+=(a/60+1)*15;
			n--;
		}
		if(summ<sumj)
		{
			printf("Case %d: Mile %d\n",temp,summ );
		}
		else if(summ>sumj)
		{
			printf("Case %d: Juice %d\n",temp,sumj );
		}
		else if(summ==sumj)
		{
			printf("Case %d: Mile Juice %d\n",temp,summ );
		}
		temp++;
		t--;
	}
}