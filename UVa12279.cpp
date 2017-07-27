#include<iostream>
using namespace std;
int main()
{
	int t=1,n,a,zcount;
	while(1)
	{
		zcount=0;
		scanf("%d",&n);
		if(n==0)
			break;
		for(register int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a==0)
				zcount++;
		}
		printf("Case %d: %d\n",t,n-2*zcount);
		t++;
	}
}