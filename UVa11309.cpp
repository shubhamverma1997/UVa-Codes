//Counting Chaos
#include<iostream>
using namespace std;
int timenow[5];
void input()
{
	int i=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
		{
			timenow[i]=c-'0';
			i++;
		}
		c=getchar();
	}
}
int main()
{
	long long int n;
	scanf("%lld",&n);
	getchar();
	while(n)
	{
		input();
		int temp,min,sec;
		
		temp=timenow[0]*1000+timenow[1]*100+timenow[2]*10+timenow[3];

		while(1)
		{
			
			min=temp/100;
			sec=temp%100;
			sec++;

			if(sec>59)
			{
				sec=0;
				min++;
			}
			if(min>23)
			{
				min=0;
				sec=0;
			}

			temp=min*100+sec;
			int rev=0,store=temp;
			while(store>0)
			{
				rev=rev*10+store%10;
				store=store/10;
			}
			if(rev==temp)
			{
				printf("%d%d:%d%d\n",temp/1000,(temp/100)%10,(temp%100)/10,(temp%10));
				break;
			}
		}
		n--;
	}
}