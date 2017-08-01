//Mother bear
#include<iostream>
using namespace std;

char str[100005];
long long int input()
{
	char c;
	long long int i=0;

	c=getchar();

	while(c!='\n')
	{
		if(c>='a'&& c<='z')
		{
			str[i]=c;
			i++;
		}
		else if(c>='A'&& c<='Z')
		{
			str[i]=char(c+32);
			i++;
		}
		c=getchar();
	}

	if(str[0]=='d' && str[1]=='o' && str[2]=='n' && str[3]=='e')
		return-1;

	return i;
}

int main()
{
	long long int length;
	int flag;
	while(1)
	{
		flag=1;
		length=input();
		if(length==-1)
			break;
		
		for(long long int i=0,j=length-1;i<=j;i++,j--)
		{
			if(str[i]!=str[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			printf("Uh oh..\n");
		}
		else
		{
			printf("You won't be eaten!\n");
		}
	}
}