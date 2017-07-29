//Train Tracks
#include<iostream>
using namespace std;
int main()
{
	int t,sm=0,sf=0;
	char a,b,c;
	scanf("%d",&t);
	getchar();
	while(t)
	{
		c='0';
		sm=0;
		sf=0;
		while(c!='\n')
		{
			a=getchar();
			b=getchar();
			c=getchar();

			if(a=='M')
				sm++;
			else
				sf++;
			if(b=='M')
				sm++;
			else
				sf++;
		}
		
		if(sm==1 && sf==1)
		{
			printf("NO LOOP\n");
			t--;
			continue;
		}
		if(sm==sf)
			printf("LOOP\n");
		else
			printf("NO LOOP\n");
		t--;
	}
}