//Parking
#include<iostream>
using namespace std;
int main()
{
	int t,n,m,mi,ma;
	scanf("%d",&t);
	while(t)
	{
		mi=200;
		ma=-1;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&m);
			if(mi>m)
				mi=m;
			if(ma<m)
				ma=m;
		}
		printf("%d\n",2*(ma-mi));
		t--;
	}
}