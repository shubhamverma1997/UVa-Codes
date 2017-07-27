//Packing for Holiday
#include<iostream>
using namespace std;
int main()
{
	int t,l,w,h,c=1;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&l);
		scanf("%d",&w);
		scanf("%d",&h);
		if(l>20 || w>20 || h>20)
			printf("Case %d: bad\n",c);
		else
			printf("Case %d: good\n",c);
		c++;
		t--;
	}
}