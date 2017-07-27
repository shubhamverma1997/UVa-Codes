//Cost Cutting
#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,temp=0;
	scanf("%d",&t);
	while(t)
	{
		temp++;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a>b && c>a || a<b && c<a)
			printf("Case %d: %d\n",temp,a);
		else if(a>b && c<b || a<b && c>b)
			printf("Case %d: %d\n",temp,b);
		else
			printf("Case %d: %d\n",temp,c);
		t--;
	}
}