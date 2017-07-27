//Google is Feeling Lucky
#include<iostream>
using namespace std;
int main()
{
	int t,temp=1,max=-1;
	char  str[10][102];
	int rel[10];
	scanf("%d",&t);
	while(t)
	{
		max=-1;
		for(register int i=0;i<10;i++)
		{
			scanf("%s",str[i]);
			scanf("%d",&rel[i]);
			if(max<rel[i])
				max=rel[i];
		}

		printf("Case #%d:\n",temp);
		for(register int i=0;i<10;i++)
		{
			if(max==rel[i])
			{
				printf("%s\n",str[i]);
			}
		}

		temp++;
		t--;
	}
}