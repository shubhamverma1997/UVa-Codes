#include<iostream>
using namespace std;
void input()
{
	char c;
	int flag=0;
	c=getchar();
	while(c!=EOF)
	{
		if(c=='"')
		{
			if(flag==0)
			{
				printf("``");
				flag=1;
			}
			else
			{
				printf("''");
				flag=0;
			}
		}
		else
			printf("%c",c);
		c=getchar();
	}
}
int main()
{
	input();
}