//Lumberjack Sequencing
#include<iostream>
using namespace std;
int main()
{
	int n,a[10],flag;
	scanf("%d",&n);
	printf("Lumberjacks:\n");
	while(n)
	{
		flag=1;
		for(int i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<10;i++)
		{
			if(a[i-1]<a[i])
				continue;
			else
			{
				flag=0;
				break;
			}
		}

		if(flag==0)
		{
			flag=1;
			for(int i=1;i<10;i++)
			{
				if(a[i-1]>a[i])
					continue;
				else
				{
					flag=0;
					break;
				}
			}
		}
		if (flag==0)
		{
			printf("Unordered\n");	/* code */
		}
		else
			printf("Ordered\n");
		n--;
	}
}