//Jumping Mario
#include<iostream>
using namespace std;
int main()
{
	int t,n,a,temp=1,h,l,prev;
	scanf("%d",&t);
	while(t)
	{
		h=0;
		l=0;
		scanf("%d",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(i==0)
			{
				prev=a;
				continue;
			}
			if(prev>a)
				l++;
			else if(prev<a)
				h++;
			prev=a;
		}
		printf("Case %d: %d %d\n",temp,h,l);
		temp++;
		t--;
	}
}