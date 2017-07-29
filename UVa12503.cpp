//Robot Instructions
#include<iostream>
using namespace std;
int  input()
{
	char c;
	c=getchar();
	if(c=='L')
	{
		getchar();
		getchar();
		getchar();
		getchar();
		return -1;
	}
	else if(c=='R')
	{
		getchar();
		getchar();
		getchar();
		getchar();
		getchar();
		return 1;
	}
	else
	{
		for(int i=0;i<7;i++)
		{
			getchar();
		}
		c=getchar();
		int num=0;
		while(c!='\n')
		{
			//cout<<c<<"--";
			num=num*10+(c-'0');
			c=getchar();
		}
		//cout<<num<<"|";
		return 100+num;
	}

}
int main()
{
	int t,n,ins[102],temp,ans;
	scanf("%d",&t);
	
	while(t)
	{
		ans=0;
		scanf("%d",&n);
		getchar();
		for(register int i=1;i<=n;i++)
		{
			temp=input();
			//cout<<temp<<endl;
			if(temp>100)
			{
				ins[i]=ins[temp-100];
				ans+=ins[temp-100];
			}
			else
			{
				ins[i]=temp;
				ans+=temp;
			}
		}
		printf("%d\n",ans);
		t--;
	}
}