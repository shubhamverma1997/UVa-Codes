//Die Game
#include<iostream>
using namespace std;
int main()
{
	char dir[10];
	int top,bottom,north,south,east,west,temp1,temp2;
	int n;
	while(1)
	{
		top=1;
		bottom=6;
		north=2;
		south=5;
		east=4;
		west=3;
		scanf("%d",&n);
		if(n==0)
			break;
		while(n>0)
		{
			scanf("%s",dir);
			if(dir[0]=='n')
			{
				temp1=top;
				top=south;
				temp2=north;
				north=temp1;
				temp1=bottom;
				bottom=temp2;
				south=temp1;

			}
			else if(dir[0]=='s')
			{
				temp2=south;
				south=top;
				temp1=bottom;
				bottom=temp2;
				temp2=north;
				north=temp1;
				top=temp2;

			}
			else if(dir[0]=='e')
			{
				temp1=east;
				east=top;
				temp2=bottom;
				bottom=temp1;
				temp1=west;
				west=temp2;
				top=temp1;
			}
			else if(dir[0]=='w')
			{
				temp1=west;
				west=top;
				temp2=bottom;
				bottom=temp1;
				temp1=east;
				east=temp2;
				top=temp1;
			}
			n--;
		}
		printf("%d\n",top);
	}
}