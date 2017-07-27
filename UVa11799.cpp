//Horror Dash
#include<iostream>
using namespace std;
int main()
{
	int t,temp=1,n,a,max;
	scanf("%d",&t);
	while(t)
	{
		max=-1;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&a);
			if(a>max)
				max=a;
		}
		printf("Case %d: %d\n",temp,max);
		temp++;
		t--;
	}
}