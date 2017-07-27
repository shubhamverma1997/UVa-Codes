//Save Setu
#include<iostream>
using namespace std;
long long int input()
{
	long long int num=0;
	int flag=0;
	char c;
	c=getchar();
	if(c=='d')
		flag=1;
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
			num=num*10+(c-'0');
		c=getchar();
	}
	if(flag==1)
		return num;
	else
		return-1;
}
int main()
{
	long long int t,i,sum=0,temp=0;
	char s[14];
	scanf("%lld",&t);
	getchar();
	while(t)
	{
		temp=input();
		if(temp!=-1)
		{
			sum+=temp;
		}
		else
		{
			printf("%lld\n",sum);
		}
		t--;
	}
}