//Parking
#include<iostream>
using namespace std;
int main()
{
	int t,k,n,m,x,y;
	while(1)
	{
		scanf("%d",&k);
		if(k==0)
			break;
		scanf("%d",&n);
		scanf("%d",&m);
		for(register int i=0;i<k;i++)
		{
			scanf("%d",&x);
			scanf("%d",&y);
			if(y<m && x!=n)
				printf("S");
			else if(y>m && x!=n)
				printf("N");
			else if(y==m)
			{	
				printf("divisa\n");
				continue;
			}
			if(x<n)
				printf("O\n");
			else if(x>n)
				printf("E\n");
			else
			{
				printf("divisa\n");
				continue;
			}
		}
	}
}